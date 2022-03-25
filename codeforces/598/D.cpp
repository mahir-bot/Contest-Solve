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
#define vuu vector<ull>
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
#define nl endl
#define SP(x, y) fixed << setprecision((x)) << (y)
#define mod 1000000007
const ll INF = LLONG_MAX;

int fx[] = {0, 1, 0, -1};
int fy[] = {-1, 0, 1, 0};
int kr[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int kc[] = {-1, 1, -2, 2, -2, 2, -1, 1};
//#ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
//#endif
/// cout<<"Case "<<z++<<": "<<__<<endl;

typedef bool (*comp)(pii, pii);

//******************************** Template ***********************
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

///////////////////////////////////////////////////////////////////////////
//////////////////// DO NOT TOUCH BEFORE THIS LINE ////////////////////////
///////////////////////////////////////////////////////////////////////////

int z = 1;
vector<vector<char>> g;
bool vis[1005][1005];
bool pos[1005][1005];
int arr[1008][1008];
bool is(int x, int y)
{
    if (x >= 0 && y >= 0 && vis[x][y] == false) // out of box or not
        return true;
    return false;
}
int dfs(int x, int y, int cnt)
{
    vis[x][y] = true;

    for (int i = 0; i < 4; i++)
    {
        if (g[x + fx[i]][y + fy[i]] == '*')
        {
            cnt++;
        }
        else if (!vis[x + fx[i]][y + fy[i]])
        {
            cnt += dfs(x + fx[i], y + fy[i], 0);
        }
    }

    return cnt;
}
void solve()
{
    /*

     */

    int x, y;
    cin >> x >> y;
    --x, --y;
    cout << arr[x][y] << nl;
}

void update(int x, int y, int pp)
{
    pos[x][y] = true;
    arr[x][y] = pp;
    for (int i = 0; i < 4;i++)
    {
        int tx = x+fx[i];
        int ty = y + fy[i];
        if(g[tx][ty]=='.' and !pos[tx][ty])
        {
            update(tx, ty, pp);
        }
    }
    return;
}

int main()
{

    FIO;
    int n, m, t;
    cin >> n >> m >> t;
    for (int i = 0; i < n; i++)
    {
        vector<char> v(m);
        cin >> v;
        g.pb(v);
    } 
    memset(vis, false, sizeof vis);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (g[i][j] == '.' and pos[i][j] == false)
            {
                int pp = dfs(i, j, 0);
                update(i, j, pp);
            }
           
        }
    }
    while (t--)
        solve();
}