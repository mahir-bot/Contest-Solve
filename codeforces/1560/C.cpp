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
#define MX 10000008
#define mx 2000056
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define MEM(a, x) memset(a, x, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define vii vector<int>
#define vll vector<ll>
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
const int INF = INT_MAX;
int fx[] = {+1, -1, +0, +0};
int fy[] = {+0, +0, +1, -1};

// freopen("data.txt", "r", stdin);
// freopen("dataOut.txt", "w", stdout);
///cout<<"Case "<<z++<<": "<<__<<endl;

typedef bool (*comp)(pii, pii);

int main()
{

    int a;
    cin >> a;
    while (a--)
    {
        unsigned ll j;
        cin >> j;
        double b, c;
        ull m, n, val, sq_val, x, y;
        b = sqrt(j);
        m = b;
        c = b - m;
        if (c != 0)
        {
            val = m + 1;
        }
        else
        {
            val = m;
        }

        sq_val = val * val;
        if (sq_val % 2 == 0)
        {
            if (c >= 0.5)
            {
                x = val;
                int o, p, q;
                o = (val - 1) * (val - 1);
                p = j - (sq_val - (2 * val) + 1);
                q = sq_val - o;
                y = (q - p) + 1;
            }
            else if (c > 0 && c < 0.5)
            {
                y = val;
                int o, p, q;
                p = j - (sq_val - (2 * val) + 1);
                x = p;
            }
            else if (c == 0)
            {
                y = 1;
                x = val;
            }
        }
        else
        {
            if (c >= 0.5)
            {
                x = val;
                int o, p, q;
                o = (val - 1) * (val - 1);
                p = j - (sq_val - (2 * val) + 1);
                q = sq_val - o;
                y = (q - p) + 1;
            }
            else if (c > 0 && c < 0.5)
            {
                y = val;
                int o, p, q;
                p = j - (sq_val - (2 * val) + 1);
                x = p;
            }
            else if (c == 0)
            {
                y = 1;
                x = val;
            }
        }
        cout << x << " " << y << endl;
    }
}
