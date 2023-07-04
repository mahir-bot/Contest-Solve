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
#define mod 998244353
const int mx = 5000 + 11;
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define mem(a, x) memset(a, x, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define vii vector<int>
#define pii pair<int, int>
#define mii map<int, int>
#define vip vector<pair<int, int>>
#define djk priority_queue<pii, vip, greater<pii>>
#define pb push_back
#define nl '\n'
#define SP(x, y) fixed << setprecision((x)) << (y)
#define INF 0x3F3F3F3F
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



vii g[mx];
vii color;
int ans = 0;
int a,b;
bool vis[mx][mx];



void clr()
{
    for (int i = 0; i<=a; i++)
    {
        g[i].clear();
    }
    color.clear();
    memset(vis,0,sizeof vis);
}

void bfs()
{
    queue<pair<pii,int>>q;

    q.push({{1,a},0});
    vis[1][a] = true;

    while (q.empty()==false)
    {
        pii x;
        int y;
        tie(x,y) = q.front();
        q.pop();

        if (x.ff==a and x.ss==1)
        {
            ans = y;
            return;
        }

        for (int i = 0; i<g[x.ff].size(); i++)
        {
            for (int j = 0; j<g[x.ss].size(); j++)
            {
                int f = g[x.ff][i];
                int s = g[x.ss][j];
                if (vis[f][s])
                    continue;
                if (color[f-1]==color[s-1])
                    continue;

                vis[f][s] = true;

                q.push({{f,s},y+1});
            }
        }
    }
    ans = -1;
    return;
}




void solve()
{
    /*

    */


    cin>>a>>b;

    color.resize(a);
    cin>>color;

    for (int i = 0; i<b; i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);
    }

    bfs();
    cout<<ans<<nl;
    clr();




}



signed main()
{
    ios_base::sync_with_stdio(0);

    cin.tie(0);

    cout.tie(0);
    int tt;
    cin>>tt;

    while (tt--)
        solve();

}