#include <bits/stdc++.h>
using namespace std;
// using u128 = __int128;
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
// #define int ll
// #define ull unsigned ll int
// #define int ll
#define EPS 0.00000001
#define MV 1e18
#define MX 1000000009
#define mod 1000007
#define mx 2000006
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




// int fx[] = {0, 1, 0, -1};
// int fy[] = { -1, 0, 1, 0};
// int tr[] = { -2, -2, -1, -1, 1, 1, 2, 2};
// int tc[] = { -1, 1, -2, 2, -2, 2, -1, 1};



// typedef bool (*comp)(pii, pii);

//******************************** Template ***********************
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
// template <class T>
// inline T isOn(T n, T pos)
// {
//     return (bool)(n & ((T)1 << pos));
// }

template <class T>
istream &operator>>(istream &is, vector<T> &input)
{
    for (T &in : input)
    {
        is >> in;
    }
    return is;
}
// template <class T> inline T bigmod(T p, T e, T M) {
//     ll ret = 1;
//     for (; e > 0; e >>= 1) {
//         if (e & 1) ret = (ret * p) % M;
//         p = (p * p) % M;
//     }
//     return (T)ret;
// }

// template <typename T>
// T Hypot(T x, T y)
// {
//     return hypot(x, y);
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
// order_of_key(?) : return count of values which is < ?
// find_by_order(?): access the ? index in set
//__builtin_popcount

//******************************** Template ***********************

//******************************** Function ***********************
// ull toDecimal(string bin)
// {
//     ull deci = std::bitset<64>(bin).to_ulong(); // binary string to decimal
//     return deci;
// }
// string toBinary(ll decimal)
// {
//     std::string binary = std::bitset<64>(decimal).to_string(); // to binary
//     return binary;
// }
// string hexToBinary(string input)
// {
//     unsigned int x =  stoul(input, nullptr, 32);
//     string result = bitset<32>(x).to_string();
//     return result;
// }


// int z = 1;
// void loj()
// {
//     cout << "Case " << z++ << ": ";
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



void solve()
{

    int a;
    cin >> a;
    vii v(a);
    cin >> v;


    int ans = 0;

    int cur = 0;
    int last = v[0];
    vii temp;
    for (int i = 0; i < a; i++)
    {
        if (temp.empty())
            temp.pb(v[i]);
        else
        {
            if (temp.back() >= v[i])
                temp.pb(v[i]);
            else
            {

                ans = max((int)temp.size(), ans);
                temp.clear();
                temp.pb(v[i]);
            }
        }
    }

    ans = max(ans, (int)temp.size());
    cout << ans - 1 << nl;


}




signed main()
{
    // freopen("bad-memes.in", "r", stdin);
    FIO;
    // sublime();


    // int a ;
    // cin >> a;
    // while (a--)
    solve();


}


