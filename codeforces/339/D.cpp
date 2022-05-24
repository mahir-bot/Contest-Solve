#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/Tree_policy.hpp>
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

int Tree[mx * 3];
int v[mx];
int tnt = 0, cnt = 0;

void init(int node, int b, int e)
{
    if (b == e)
    {
        Tree[node] = v[b];
        tnt = 0;
        return;
    }

    int left = 2 * node;
    int right = 2 * node + 1;
    int mid = (b + e) / 2;
    init(left, b, mid);
    init(right, mid + 1, e);
    tnt++;
    if (tnt % 2)
    {
        Tree[node] = (Tree[left] | Tree[right]);
       // cout << Tree[node] << "OR " << cnt << " " << Tree[left] << " " << Tree[right] << " " << left << " " << right << nl;
    }

    else
    {
        Tree[node] = (Tree[left] ^ Tree[right]);
       // cout << Tree[node] << "OR " << cnt << " " << Tree[left] << " " << Tree[right] << " " << left << " " << right << nl;
    }
}

int query(int node, int b, int e, int i, int j)
{
    if (i > e or j < b)
        return 0;
    if (b >= i and j >= e)
    {
        return Tree[node];
    }

    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (b + e) / 2;
    int leftQ = query(left, b, mid, i, j);
    int rightQ = query(right, mid + 1, e, i, j);

    return leftQ + rightQ;
}

void update(int node, int b, int e, int i, int val)
{
    if (i > e or i < b)
        return;
    if (b >= i and e <= i)
    {
        Tree[node] = val;
        return;
    }

    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (b + e) / 2;
    update(left, b, mid, i, val);
    update(right, mid + 1, e, i, val);
    cnt++;
    if (cnt % 2)
    {
        Tree[node] = (Tree[left] | Tree[right]);
        //cout << Tree[node] << "OR " << cnt << " " << Tree[left] << " " << Tree[right] << " " << left << " " << right << nl;
    }
    else
    {
        Tree[node] = (Tree[left] ^ Tree[right]);
       // cout << Tree[node] << "XOR " << cnt << " " << Tree[left] << " " << Tree[right] << " " << left << " " << right << nl;
    }
}

void solve()
{
    /*

     */

    int n, q;
    cin >> n >> q;
    n = (1 << n);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    init(1, 1, n);

    // for (int i = 0; i <= n + 10; i++)
    // {

    //     cout << Tree[i] << nl;
    // }

    while (q--)
    {
        cnt = 0;
        int a, b;
        cin >> a >> b;
        update(1, 1, n, a, b);
        // for (int i = 1; i <= n * 2; i++)
        // {
        //     cout << Tree[i] << nl;
        // }

         cout << Tree[1] << nl;
    }
}

int main()
{
    FIO;
    startTime = clock();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    solve();
    // }

    // fprintf(stderr, "\n>> Runtime: %.10fs\n", (double)(clock() - startTime) / CLOCKS_PER_SEC);
}