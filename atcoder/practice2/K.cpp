#include <bits/stdc++.h>

using namespace std;
// using u128 = __int128;
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define ull unsigned ll int
#define EPS 0.00000001
#define MV 1e18
#define MX 1000000009
#define mod 1000000007
// #define mx (int)5e5+10
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define mem(a, x) memset(a, x, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define vii vector<int>
#define vll vector<ll>
#define vvi vector<vii>
#define vvl vector<vll>
#define vul vector<ull>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pip pair<int, pii>
#define pul pair<ull, ull>
#define mii map<int, int>
#define mll map<ll, ll>
#define qii queue<int>
#define dii deque<int>
#define vip vector<pair<int, int>>
#define vlp vector<pair<ll, ll>>
#define djk priority_queue<pair<ll,pll>, vector<pair<ll,pll>>, greater<<pair<ll,pll>>>
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define nl '\n'
#define SP(x, y) fixed << setprecision((x)) << (y)
#define INF 0x3F3F3F3F
#define ff first
#define ss second
#define SZ(s) s.size()




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
// #include <ext/pb_ds/tree_policy.hpp>
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
    cout<<"Case "<<z++<<":";
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

ll module = 998244353;
const int mx = (int)5e5+10;
ll v[mx];


struct ST {
    ll Tree[mx * 3], lazyB[mx * 3],lazyC[mx*3],ok[mx*3];
    void clear()
    {
        memset(Tree,0LL,sizeof(Tree));
        fill(lazyB,lazyB+mx*4,1);
        memset(lazyC,0LL,sizeof(lazyC));
        memset(ok,0LL,sizeof(ok));
    }

    void push(ll node, ll lx, ll rx)
    {

        if (lx==rx)
            return;

        int left = node<<1;
        int right = left|1;
        int mid = (rx+lx)/2;


        lazyB[left] = (lazyB[left]*lazyB[node])%module;
        lazyB[right] =(lazyB[right]*lazyB[node])%module;

        lazyC[left] = ((lazyC[left]*lazyB[node])%module + lazyC[node])%module;
        lazyC[right] = ((lazyC[right]*lazyB[node])%module + lazyC[node])%module;

        Tree[left] = ((Tree[left]*lazyB[node])%module+((mid-lx+1)*lazyC[node])%module)%module;
        Tree[right] = ((Tree[right]*lazyB[node])%module+((rx-mid)*lazyC[node])%module)%module;



        ok[left] |= ok[node];
        ok[right] |= ok[node];
        ok[node] = false;
        lazyB[node] = 1;
        lazyC[node] = 0;
        return;
    }

    void init(ll node, ll b, ll e)
    {

        if (b == e)
        {
            Tree[node] = v[b];
            return;
        }

        ll left = 2 * node;
        ll right = 2 * node + 1;
        ll mid = (b + e) / 2;
        init(left, b, mid);
        init(right, mid + 1, e);
        Tree[node] = (Tree[left] + Tree[right])%module;
    }

    ll query(ll node, ll lx, ll rx, ll l, ll r)
    {

        if (ok[node])
            push(node, lx, rx);


        if (lx > r or rx < l)
            return 0LL; //বাইরে চলে গিয়েছে
        if (lx >= l and r >= rx)
        {
            return Tree[node]%module; //রিলেভেন্ট সেগমেন্ট
        }

        ll left = node * 2; //আরো ভাঙতে হবে
        ll right = node * 2 + 1;
        ll mid = (lx + rx) / 2;
        ll leftQ = query(left, lx, mid, l, r)%module;
        ll rightQ = query(right, mid + 1, rx, l, r)%module;

        return (leftQ + rightQ)%module; //বাম এবং ডান পাশের যোগফল
    }

    void update(ll node, ll lx, ll rx, ll l, ll r, ll b,ll c)
    {
        if (ok[node])
            push(node, lx, rx);

        if (lx > r or rx < l)
            return; //বাইরে চলে গিয়েছে
        if (lx >= l and rx <= r)
        {
            Tree[node] = ((Tree[node]*b)%module+((rx-lx+1)*c)%module)%module;
            ok[node] = 1;

            lazyB[node] = (lazyB[node]*b)%module;
            lazyC[node] = ((lazyC[node]*b)%module + c)%module;
            push(node, lx, rx);
            return;
        }

        ll left = node * 2; //আরো ভাঙতে হবে
        ll right = node * 2 + 1;
        ll mid = (lx + rx) / 2;
        // push(node, lx, rx);
        update(left, lx, mid, l, r, b,c);
        update(right, mid + 1, rx, l, r, b,c);
        Tree[node] = (Tree[left] + Tree[right])%module;
    }
} st;



void solve()
{

    /*

    5 5
    1 2 3 4 5
    0 0 5 5 2
    0 0 5 10 4
    0 0 2 2 3
    0 0 3 4 5
    1 0 5

    */

    ll a,q;
    cin>>a>>q;
    for (ll i=1; i<=a; i++)
        cin>>v[i];

    st.clear();

    st.init(1,1,a);

    while (q--)
    {

        int x;
        cin>>x;
        if (x==0)
        {
            ll l,r,b,c;
            cin>>l>>r>>b>>c;
            ++l;
            st.update(1,1,a,l,r,b,c);
        }
        else
        {
            ll l,r;
            cin>>l>>r;
            l++;
            cout<<st.query(1,1,a,l,r)%module<<nl;
        }
    }


}




int main()
{
    FIO;
    // int t;
    // cin>>t;
    // while (t--)

    solve();
}