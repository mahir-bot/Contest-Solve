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

clock_t startTime;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
double getCurrentTime()
{
    return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

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
int parent[mx];
int siz[mx];
void init(int n) // initialize
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
        siz[i] = 1;
    }
}

int Find(int u) // Finding the parent
{
    if (u == parent[u])
    {
        return u;
    }
    return parent[u] = Find(parent[u]); // path compresion
}

void show()
{
    for (int i = 1; i <= 8; i++)
    {
        cout << "parent of " << i << " is " << parent[i] << endl;
    }
}

void Union(int u, int v)
{
    int p = Find(u);
    int q = Find(v);

    if (p != q)
    {
        if(siz[p]<siz[q])
        {
            swap(p, q);
        }
        parent[q] = p;
        siz[p] += siz[q];
    }
}

bool isFriend(int u, int v)
{
    int p = Find(u);
    int q = Find(v);
    return (p == q);
}

ll power(ll v, ll B, ll C)
{
    if (v == 0)
        return 0;
    if (B == 0)
        return 1;
    ll y;
    if (B % 2 == 0)
    {
        y = power(v, B / 2, C);
        y = (y * y) % C;
    }
    else
    {
        y = v % C;
        y = (y * power(v, B - 1, C) % C) % C;
    }
    return (ll)((y + C) % C);
}
void solve()
{
    /*

     */

    int tt;
    cin >> tt;
    vii a(tt), b(tt), c(tt);
    cin >> a >> b >> c;

    init(tt);

    set<int> s;
    for (int i = 0; i < tt; i++)
    {
        Union(a[i], b[i]);
        if (a[i] == b[i])
        {
            c[i] = b[i];
        }
    }

    for (int i = 1; i <= tt; i++)
    {
        s.insert(Find(i));
    }

    for (int i = 0; i < tt; i++)
    {
        if (c[i])
        {
            s.erase(Find(c[i]));
        }
    }

    cout << power(2,s.size(),mod) << nl;
}

int main()
{
    FIO;
    startTime = clock();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    //fprintf(stderr, "\n>> Runtime: %.10fs\n", (double)(clock() - startTime) / CLOCKS_PER_SEC);
}
