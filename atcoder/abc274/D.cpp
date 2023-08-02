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


int a,x,y;
vii v,vv;
int dp[1010][30000][2];

void go(int i,int sum,int len,int w,vii &vx,int target,bool &res)
{

    if (i==len)
    {
        // cout<<">>"<<" "<<i<<" "<<len<<" "<<sum<<" "<<target<<nl;
        if (sum==target)
        {
            res = true;
        }
        return;
    }

    // cout<<i<<" "<<sum<<" "<<len<<" "<<vx[i]<<nl;

    if (dp[i][sum][w])
        return;

    dp[i][sum][w] = 1;

    go(i+1,sum+vx[i],len,w,vx,target,res);
    go(i+1,sum-vx[i],len,w,vx,target,res);


}



void solve()
{
    cin>>a>>x>>y;

    for (int i = 0; i<a; i++)
    {
        int xx;
        cin>>xx;
        if (i%2==0)
        {
            v.pb(xx);
        }
        else
            vv.pb(xx);
    }
    // for (auto k:vv)
    //     cout<<k<<" ";
    // cout<<nl;

    bool aa = false,bb = false;

    memset(dp,0,sizeof dp);

    int val = v[0];
    reverse(all(v));
    v.pop_back();
    reverse(all(v));
    bool ok = false,ok2=false;
    // cout<<go(0,val+1000,v.size(),0,v,x+1000) <<nl;
    // cout<<go(0,1000,vv.size(),1,vv,y+1000) <<nl;
    go(0,val+10000,v.size(),0,v,x+10000,ok);
    go(0,10000,vv.size(),1,vv,y+10000,ok2);
    if (ok and ok2)
        cout<<"Yes"<<nl;
    else
        cout<<"No"<<nl;



}




signed main()
{
    FIO;
    // int t;
    // cin>>t;
    // while (t--)
    solve();
}
