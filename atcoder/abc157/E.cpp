#include <bits/stdc++.h>

using namespace std;
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

// using u128 = __int128;
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define int ll
// #define ull unsigned ll int
#define EPS 0.00000001
#define mod (int)1e9+7
const int mx = 1e6+30;
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define mem(a, x) memset(a, x, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define vii vector<int>
#define graph vector<vii>
#define pii pair<int, int>
#define mii map<int, int>
#define vip vector<pair<int, int>>
#define djk priority_queue<pii, vip, greater<pii>>
#define pb push_back
#define nl '\n'
#define SP(x, y) fixed << setprecision((x)) << (y)
#define inf 0x3F3F3F3F
#define ff first
#define ss second
#define sz(s) s.size()




int fx[] = {0, 1, 0, -1};
int fy[] = { -1, 0, 1, 0};
// int tr[] = { -2, -2, -1, -1, 1, 1, 2, 2};
// int tc[] = { -1, 1, -2, 2, -2, 2, -1, 1};



// // typedef bool (*comp)(pii, pii);

// //******************************** Template ***********************
// template <class T>
// inline T bitOn(T n, T pos)
// {
//     return n | ((T)1 << pos);
// }
// template <class T>
// inline T bitOff(T n, T pos)
// {
//     return n & ~((T)1 << pos);
// }
template <class T>
inline T isOn(T n, T pos)
{
    return (bool)(n & ((T)1 << pos));
}

template <class T>
istream &operator>>(istream &is, vector<T> &input)
{
    for (T &in : input)
    {
        is >> in;
    }
    return is;
}
template <typename T>
ostream &operator<<(ostream &os, const vector<T> &vec)
{
    for (auto &a : vec)
        cout << a << " ";
    return os;
}
// template <class T> inline T bigmod(T p,T e,T M) {
//     ll ret = 1;
//     for (; e > 0; e >>= 1) {
//         if (e & 1) ret = (ret * p) % M;
//         p = (p * p) % M;
//     }
//     return (T)ret;
// }

// template <typename T>
// T Hypot(T x,T y)
// {
//     return hypot(x,y);
// }

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/Tree_policy.hpp>
// #include <ext/pb_ds/detail/standard_policies.hpp>
// using namespace __gnu_pbds;
// using namespace __gnu_cxx;

// template <typename T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// template <typename T>
// using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// // order_of_key(?) : return count of values which is < ?
// // find_by_order(?): access the ? index in set
// //__builtin_popcount

// //******************************** Template ***********************

int z = 1;
void loj()
{
    cout<<"Case "<<z++<<":"<<nl;
}
// void sublime()
// {
// #ifndef ONLINE_JUDGE
//     freopen("inputf.in", "r", stdin);
//     freopen("outputf.out", "w", stdout);
// #endif
// }
///////////////////////////////////////////////////////////////////////////
//////////////////// DO NOT TOUCH BEFORE THIS LINE ////////////////////////
///////////////////////////////////////////////////////////////////////////

//NO FIO IN INTERACTIVE PROBLEM
//PRINT FFLUSH(STDOUT) AND NEW LINE

vector<set<char>> Tree(mx*4);
char v[mx];
set<char> mrg(set<char> a,set<char> b) {
    for (auto i:b) {
        a.insert(i);
    }
    return a;
}
struct ST {


    void init(int node, int b, int e)
    {
        if (b == e)
        {
            // set<char>s;
            // s.insert(v[b]);

            Tree[node].insert(v[b]);
            return;
        }

        int left = 2 * node;
        int right = 2 * node + 1;
        int mid = (b + e) / 2;
        init(left, b, mid);
        init(right, mid + 1, e);
        // set<char>s(Tree[left]);
        // s.insert(all(Tree[right]));
        Tree[node] = mrg(Tree[left],Tree[right]);


    }

    set<char> query(int node, int b, int e, int i, int j)
    {
        if (i > e || j < b)
        {
            set<char>s;
            return s; //বাইরে চলে গিয়েছে
        }
        if (b >= i && j >= e)
        {

            return Tree[node]; //রিলেভেন্ট সেগমেন্ট
        }

        int left = node * 2; //আরো ভাঙতে হবে
        int right = node * 2 + 1;
        int mid = (b + e) / 2;



        return mrg(  query(left, b, mid, i, j), query(right, mid + 1, e, i, j)); //বাম এবং ডান পাশের যোগফল
    }

    void update(int node, int b, int e, int i, char val)
    {
        if (i < b or i > e)
            return; //বাইরে চলে গিয়েছে
        if (b >= i and e <= i)
        {
            Tree[node].clear();
            Tree[node].insert(val); //রিলেভেন্ট সেগমেন্ট
            return;
        }

        int left = node * 2; //আরো ভাঙতে হবে
        int right = node * 2 + 1;
        int mid = (b + e) / 2;
        update(left, b, mid, i, val);
        update(right, mid + 1, e, i, val);
        Tree[node] = mrg(Tree[left],Tree[right]);
    }
} st;





void solve()
{


    int a;
    cin>>a;
    for (int i=1; i<=a; i++)
    {
        cin>>v[i];
    }
    st.init(1,1,a);

    int q;
    cin>>q;
    while (q--)
    {
        int x;
        cin>>x;
        if (x==1)
        {
            int aa;
            char c;
            cin>>aa>>c;
            st.update(1,1,a,aa,c);
        }
        else
        {
            int l,r;
            cin>>l>>r;
            set<char>s;
            s = st.query(1,1,a,l,r);
            cout<<s.size()<<nl;
        }
    }


}



signed main()
{
    FIO;
    // int tt;
    // cin>>tt;

    // while (tt--)
    solve();

}
