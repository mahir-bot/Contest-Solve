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
// #define ull unsigned ll int
#define EPS 0.00000001
#define mod 998244353
const int mx = 3e5+300;
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




vector<pair<ll,ll>> G[mx];
vii dis(mx, LLONG_MAX);
vii parent(mx);
djk pq;
void clr()
{


    for (int i = 0; i<mx; i++)
    {
        dis[i] = LLONG_MAX;
        parent[i] = 0;
    }

}
int ans1 = 0;
int n,nn,m;
int dijkstra(int start,int s,int k)
{
    pq.push({0, start});
    dis[start] = 0;
    while (!pq.empty())
    {
        int primary_node = pq.top().second;
        pq.pop();
        for (int i = 0; i < G[primary_node].size(); i++)
        {
            int cur_node = G[primary_node][i].first;
            int cur_weight = G[primary_node][i].second;
            if (cur_weight + dis[primary_node] <= dis[cur_node])
            {
                dis[cur_node] = cur_weight + dis[primary_node];
                pq.push({dis[cur_node], cur_node});
            }
        }
    }

    int ans = 0;
    for (int i = s; i<=k; i++)
    {
        ans = max(ans,dis[i]);
        // cout<<dis[i]<<nl;
    }
    // cout<<nl;
    return ans;


}



void solve()
{

    cin>>n>>nn>>m;

    for (int i =0; i<m; i++)
    {
        int x,y;
        cin>>x>>y;
        G[x].pb({y,1});
        G[y].pb({x,1});
    }

    ans1 =dijkstra(1,1,n);
    clr();

    ans1+=dijkstra(n+nn,n+1,n+nn);



    cout<<ans1+1<<nl;





}




signed main()
{
    FIO;
    // int t;
    // cin>>t;
    // while (t--)
    solve();
}
