#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>

using namespace __gnu_pbds;
using namespace __gnu_cxx;
using namespace std;
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define ull unsigned ll
#define EPS 1e-12
#define MV 1e18
#define MX 100000009
#define mx 2000056
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define mem(a, x) memset(a, x, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define vii vector<int>
#define vll vector<ll>
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
#define mp mate_pair
#define nl '\n'
#define SP(x, y) fixed << setprecision((x)) << (y)
#define mod 1000000007
const ll INF = LLONG_MAX;

// clock_t startTime;
// mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
// double getCurrentTime()
// {
//     return (double)(clock() - startTime) / CLOCKS_PER_SEC;
// }

int fx[] = {0, 1, 0, -1};
int fy[] = {-1, 0, 1, 0};
int tr[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int tc[] = {-1, 1, -2, 2, -2, 2, -1, 1};
//#ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
//#endif
/// cout<<"Case "<<z++<<": "<<__<<endl;

// typedef bool (*comp)(pii, pii);

//******************************** Template ***********************
template <class T>
inline T bitOn(T n, T pos) { return n | ((T)1 << pos); }
template <class T>
inline T bitOff(T n, T pos) { return n & ~((T)1 << pos); }
template <class T>
inline T isOn(T n, T pos) { return (bool)(n & ((T)1 << pos)); }

template <class T>
istream &operator>>(istream &is, vector<T> &input)
{
    for (T &in : input)
        is >> in;
    return is;
}
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
// bool is(int x, int y)
// {
//     if (x >= 0 && y >= 0 && vis[x][y] == false) // out of box or not
//         return true;
//     return false;
// }
///////////////////////////////////////////////////////////////////////////
//////////////////// DO NOT TOUCH BEFORE THIS LINE ////////////////////////
///////////////////////////////////////////////////////////////////////////

int z = 1;

map<ull, ll> mm;

ll dfs(ll n, ull cur)
{
    string ss = to_string(cur);
    // cout << ss << nl;

    if (ss.size() > n)
        return INT_MAX;

    if (ss.size() == n)
    {
        return 0;
    }
    if (mm[cur])
        return mm[cur];
    mii m;
    ll ans = INT_MAX;
    for (int i = 0; i < ss.size(); i++)
    {
        if (ss[i] == '1' or ss[i] == '0')
            continue;
        if (m[ss[i] - '0'])
            continue;
        if (m[ss[i] - '0' == 0])
        {
            m[ss[i] - '0'] = 1;
        }

        ull now = cur * (ss[i] - '0');

        ans = min(ans, 1 + dfs(n, now));
    }

    return mm[cur] = ans;
}

void solve()
{
    /*

     */
    ll a;
    ull b;
    cin >> a >> b;
    string s = to_string(b);

    if (b == 1 and a > 1)
    {
        cout << -1 << nl;
        return;
    }
    if (s.size() == a)
    {
        cout << 0 << nl;
        return;
    }

    ll res = dfs(a, b);

    if (res == INT_MAX)
    {
        cout << -1 << nl;
        return;
    }
    cout << res << nl;
}

int main()
{
    FIO;
    //  startTime = clock();
    // int t;
    // cin >> t;
    // while (t--)
    //{
    solve();
    //}

    // fprintf(stderr, "\n>> Runtime: %.10fs\n", (double)(clock() - startTime) / CLOCKS_PER_SEC);
}