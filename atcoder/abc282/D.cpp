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


vii g[mx];
map<int,char>m;
bool check[mx];
int cnt = 0,cnt2=0;
void dfs(int node,char now)
{

    check[node] = true;

    m[node] = now;
    if (now=='W')
        cnt++;
    else
        cnt2++;

    for (auto k:g[node])
    {

        char x;
        if (now=='B')
            x = 'W';
        else
            x = 'B';
        if (check[k])
        {
            // cout<<node<<" "<<k<<" "<<now<<" "<<m[k]<<" "<<x<<nl;
            if (m[k]==now)
            {
                cout<<0<<nl;
                exit(0);
            }
            continue;
        }
        dfs(k,x);
    }

    // cout<<node<<" "<<m[node]<<" "<<now<<nl;
}


void solve()
{

    int a,b;
    cin>>a>>b;

    if (b==0)
    {
        cout<<(a*(a-1))/2<<nl;
        return;

    }


    int st = 0;
    for (int i = 0; i<b; i++)
    {
        int x,y;
        cin>>x>>y;
        st = x;
        g[x].pb(y);
        g[y].pb(x);
    }




    int ans = (a*(a-1))/2;
    ans-=b;

    for (int i = 1; i<=a; i++)
    {
        if (check[i]==false)
        {
            cnt2 = 0;
            cnt = 0;
            dfs(i,'B');
            ans-=(cnt*(cnt-1))/2;
            ans-=(cnt2*(cnt2-1))/2;
        }
    }


    cout<<ans<<nl;




}




signed main()
{
    FIO;
    // int t;
    // cin>>t;
    // while (t--)
    solve();
}
