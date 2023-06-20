#include <bits/stdc++.h>

using namespace std;
// using u128 = __int128;
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define int ll
#define ull unsigned ll int
#define EPS 0.00000001
#define MV 1e18
#define MX 1000000009
#define mod 1000007
#define mx (int)2e5+10
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
#define djk priority_queue<pll, vlp, greater<pll>>
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
    return (bool)(n & ((T)1 >> pos));
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

// int z = 1;
// void loj()
// {
//     cout<<"Pair #"<<z++<<": ";
// }
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



class DSU
{
    vll parent;
public:
    void init(int k)
    {
        parent = vll(k + 10, 0LL);
        for (int i = 0; i <= k; ++i)
        {
            parent[i] = i;
        }
    }



    ll Find(ll u) // Finding the parent
    {
        if (u == parent[u])
        {
            return u;
        }
        return parent[u] = Find(parent[u]); // path compresion
    }

    void show()
    {
        for (int i = 1; i <= parent.size(); i++)
        {
            cout << "parent of " << i << " is " << parent[i] << endl;
        }
    }

    bool Union(ll u, ll v)
    {
        ll p = Find(u);
        ll q = Find(v);

        if (p != q)
        {
            parent[q] = p;
            return true;
        }
        else
            return false;
    }

    bool isFriend(ll u, ll v)
    {
        ll p = Find(u);
        ll q = Find(v);
        return (p == q);
    }
} ;


vii g[mx];
int leaf[mx+10];
bool vis[mx];



void dfs(int node)
{

    vis[node] = 1;
    leaf[node] = 0;
    for (auto k : g[node])
    {
        if (!vis[k]) {
            dfs(k);
            leaf[node] += leaf[k];
            // set<int>s;
            // s = m[node];
            // s.insert(all(m[k]));
            // m[node] = s;
        }
    }

    if (g[node].size()==1 and node!=1)
    {
        leaf[node] = 1;
        // set<int>s;
        // s.insert(node);
        // m[node]= s;
        return;
    }



}
void solve()
{
    /*

    */

    int a;
    cin>>a;
    DSU ds;
    ds.init(a);
    for (int i = 0; i<a-1; i++)
    {
        int u,v;
        cin>>u>>v;
        g[u].pb(v);
        g[v].pb(u);

        if (u==1 || v==1)
            continue;
        else
        {
            ds.Union(u,v);
        }

    }



    dfs(1);



    int q;
    cin>>q;

    while (q--)
    {
        int x,y;
        cin>>x>>y;

        // set<int>
        int f ,sec;
        f = leaf[x];
        sec = leaf[y];

        // cout<<f<<" "<<sec<<nl;

        if (f==sec and ds.isFriend(x,y))
        {
            int kom = min(f,sec);
            int beshi = max(f,sec);
            int ans = kom*beshi;
            cout<<ans<<nl;
        }
        else if ((ds.isFriend(x,y) and f!=sec) || (x==1 || y==1))
        {
            int ans = 0;
            int kom = min(f,sec);
            int beshi = max(f,sec);
            ans = kom*kom;
            ans+=kom*(beshi-kom);
            cout<<ans<<nl;
        }
        else
        {
            int kom = min(f,sec);
            int beshi = max(f,sec);
            int ans = kom*beshi;
            cout<<ans<<nl;
        }
    }

    for (int i = 0; i<=a; i++)
    {
        g[i].clear();

        leaf[i] = 0;
        vis[i] = 0;
    }








}






signed main()
{
    FIO;
    int t;
    cin>>t;

    while (t--)
        solve();
}