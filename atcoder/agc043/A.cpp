// #include <stdio.h>
// #include<algorithm>
// #include<vector>
// #include<math.h>
//#include <iostream>

#include <bits/stdc++.h>
using namespace std;

// using u128 = __uint128_t;
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
#define mx 1000000
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define mem(a, x) memset(a, x, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define vii vector<int>
#define vll vector<ll>
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
#define nl '\n'
#define SP(x, y) fixed << setprecision((x)) << (y)
#define INF 0x3F3F3F3F
#define ff first
#define ss second
#define SZ(s) s.size()

// clock_t startTime;
// mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
// double getCurrentTime()
// {
//     return (double)(clock() - startTime) / CLOCKS_PER_SEC;
// }

// #ifndef ONLINE_JUDGE
// freopen("input.in", "r", stdin);
// freopen("output.out", "w", stdout);
// #endif

int fx[] = {0, 1, 0, -1};
int fy[] = { -1, 0, 1, 0};
int tr[] = { -2, -2, -1, -1, 1, 1, 2, 2};
int tc[] = { -1, 1, -2, 2, -2, 2, -1, 1};

/// cout<<"Case "<<z++<<": "<<__<<endl;

// typedef bool (*comp)(pii, pii);

//******************************** Template ***********************
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
template <class T> inline T bigmod(T p,T e,T M) {
    ll ret = 1;
    for (; e > 0; e >>= 1) {
        if (e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    }
    return (T)ret;
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

//******************************** Template ***********************

//******************************** Function ***********************
ull toDecimal(string bin)
{
    unsigned long deci = std::bitset<16>(bin).to_ulong(); // binary string to decimal
    return deci;
}
string toBinary(ll decimal)
{
    std::string binary = std::bitset<16>(decimal).to_string(); // to binary
    return binary;
}

///////////////////////////////////////////////////////////////////////////
//////////////////// DO NOT TOUCH BEFORE THIS LINE ////////////////////////
///////////////////////////////////////////////////////////////////////////

int z = 1;

int dx[2] = {1,0};
int dy[2] = {0,1};



void solve()
{
    /*
     */

    int a,b;
    cin>>a>>b;
    int arr[a+10][b+10]= {{0}};
    for (int i = 0; i<a; i++)
    {
        for (int j = 0; j<b; j++)
        {
            char x;
            cin>>x;
            if (x=='#')
                arr[i][j] = 1;
            else
                arr[i][j]=0;


        }
    }

    // for (int i = 0; i<a; i++)
    // {
    //     for (int j = 0; j<b; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<nl;
    // }



    ll dp[a+10][b+10];
    memset(dp,MX,sizeof(dp));
    if (arr[0][0])
    {
        dp[0][0] = 1;
    }
    else
        dp[0][0] = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k<2; k++)
            {
                int x = i+dx[k];
                int y = j+dy[k];

                if (x<a and y<b)
                {
                    int cnt = 0;
                    if (arr[i][j]==0 and arr[x][y])
                    {
                        cnt++;
                    }
                    if (dp[x][y]>dp[i][j]+cnt)
                    {
                        dp[x][y] = dp[i][j]+cnt;
                    }
                }
            }
        }
    }

    cout<<dp[a-1][b-1]<<nl;





}


int main()
{

    FIO;
#ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.out", "w", stdout);
#endif



    // int t;
    // cin >> t;
    // while (t--)
    // {

    //     solve();

    // }

    solve();
}



