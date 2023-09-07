#include <bits/stdc++.h>

using namespace std;
// #pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

// using u128 = __int128;
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define int ll
#define EPS 0.00000001
#define mod 1000000007
const int mx = 2e5 + 300;
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define mem(a, x) memset(a, x, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define vii vector<int>
#define vvl vector<vector<ll>>
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



template <class T>
inline T bitOn(T n, T pos)
{
    return n | ((T)1 << pos);
}
template <class T>
inline T bitOff(T n, T pos)
{
    return n & ~((T)1 << pos);
}
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

template <class T>
istream &operator>>(istream &is, vector<pair<T, T>> &input)
{
    for (auto &[i, n] : input)
    {
        is >> i >> n;
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
ostream &operator<<(ostream &os, const vector<pair<int, int>> &vec)
{
    for (auto &a : vec)
        cout << a.ff << " " << a.ss << nl;
    return os;
}



// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/Tree_policy.hpp>
// #include <ext/pb_ds/detail/standard_policies.hpp>
// using namespace __gnu_pbds;
// using namespace __gnu_cxx;

// template <typename T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// template <typename T>
// using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// order_of_key(?) : return count of values which is < ?
// find_by_order(?): access the ? index in set
//__builtin_popcount


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

int bin[mx];
int v[mx];

ll  lazy[mx * 4],zero[mx*4],one[mx*4];
void clr(int a)
{
    for (int i = 0; i<=4*a; i++)
    {
        lazy[i] = 0;
        zero[i] = 0;
        one[i] = 0;
    }
}

void push(int node, int lx, int rx)
{
    swap(zero[node],one[node]);
    lazy[node] = 0;
    if (lx == rx) // node is the leaf
        return;

    lazy[node * 2 ] ^= 1;
    lazy[node * 2 + 1 ] ^= 1;


    lazy[node] = 0;

}
void init(int node, int b, int e)
{
    if (b == e)
    {
        if (bin[b]==0)
        {
            zero[node] = v[b];
        }
        else
            one[node] = v[b];

        return;
    }

    int left = 2 * node;
    int right = 2 * node + 1;
    int mid = (b + e) / 2;
    init(left, b, mid);
    init(right, mid + 1, e);

    zero[node] = zero[left] xor zero[right];
    one[node] = one[left] xor one[right];
}


void update(int node, int lx, int rx, int l, int r)
{
    if (lazy[node] != 0)
        push(node, lx, rx);

    if (lx > r or rx < l)
        return; //বাইরে চলে গিয়েছে
    if (lx >= l and rx <= r)
    {
        swap(zero[node],one[node]);
        if (lx!=rx)
        {
            lazy[node*2] ^= 1;
            lazy[node*2+1] ^= 1;
        }
        return;
    }

    int left = node * 2; //আরো ভাঙতে হবে
    int right = node * 2 + 1;
    int mid = (lx + rx) / 2;

    update(left, lx, mid, l, r);
    update(right, mid + 1, rx, l, r);
    // Tree[node] = Tree[left] + Tree[right];
    zero[node] = zero[left] xor zero[right];
    one[node] = one[left] xor one[right];
}




void solve()
{
    /*
    */

    int a;
    cin>>a;
    clr(a);
    for (int i = 1; i<=a; i++)
    {
        cin>>v[i];
    }
    string s;
    cin>>s;
    for (int i = 0; i<a; i++)
    {
        if (s[i]=='0')
            bin[i+1] = 0;
        else
            bin[i+1] = 1;
    }


    init(1,1,a);
    int q;
    cin>>q;

    while (q--)
    {
        int x;
        cin>>x;
        if (x==1)
        {
            int l,r;
            cin>>l>>r;
            update(1,1,a,l,r);
        }
        else
        {
            int xx;
            cin>>xx;
            // cout<<query(1,1,a,1,a,xx)<<" ";

            if (xx==0)
            {
                cout<<zero[1]<<" ";
            }
            else
            {
                cout<<one[1]<<" ";
            }
        }
    }
    cout<<nl;

}







signed main()
{
    FIO;
    int t;
    cin >> t;
    while (t--)
        solve();
}