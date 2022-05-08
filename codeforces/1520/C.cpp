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
#define djt priority_queue<pll, vlp, greater<pll>>
#define pb push_back
#define mp mate_pair
#define nl endl
#define SP(x, y) fixed << setprecision((x)) << (y)
#define mod 1000000007
const ll INF = LLONG_MAX;

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

void solve()
{
    /*

     */
    int a;
    cin >> a;
    if (a == 1)
    {
        cout << 1 << nl;
    }
    else if (a == 2)
    {
        cout << -1 << nl;
    }
    else if (a == 3)
    {
        cout << 2 << " " << 9 << " " << 7 << nl;
        cout << 4 << " " << 6 << " " << 3 << nl;
        cout << 1 << " " << 8 << " " << 5 << nl;
    }
    else if (a == 4)
    {
        cout << 1 << " " << 14 << " " << 3 << " " << 16 << nl;
        cout << 5 << " " << 10 << " " << 7 << " " << 12 << nl;
        cout << 9 << " " << 6 << " " << 11 << " " << 8 << nl;
        cout << 13 << " " << 2 << " " << 15 << " " << 4 << nl;
    }
    else
    {
        int s = a * a;
        vii eve, odd;
        int p = 1;
        for (int i = 1; i <= s; i += a)
        {
            int cnt = i + a - 1;
            for (int j = i; j <= cnt; j++)
            {

                if (j % 2)
                {
                    odd.pb(j);
                }
                else
                {
                    eve.pb(j);
                }
            }

            if (p % 2)
            {
                for (auto k : odd)
                {
                    cout << k << " ";
                }
                for (auto k : eve)
                {
                    cout << k << " ";
                }
            }
            else
            {
                for (auto k : eve)
                {
                    cout << k << " ";
                }
                for (auto k : odd)
                {
                    cout << k << " ";
                }
            }
            ++p;

            odd.clear();
            eve.clear();
            cout << nl;
        }
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
