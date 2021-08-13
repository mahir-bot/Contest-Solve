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
    ll x;
    cin >> x;

    vll v{47, 74, 4477, 4747, 4774, 7447, 7474, 7744,
          444777, 447477, 447747, 447774, 474477, 474747, 474774,
          477447, 477474, 477744, 744477, 744747, 744774, 747447,
          747474, 747744, 774447, 774474, 774744, 777444, 44447777,
          44474777, 44477477, 44477747, 44477774, 44744777, 44747477,
          44747747, 44747774, 44774477, 44774747, 44774774, 44777447,
          44777474, 44777744, 47444777, 47447477, 47447747, 47447774,
          47474477, 47474747, 47474774, 47477447, 47477474, 47477744,
          47744477, 47744747, 47744774, 47747447, 47747474, 47747744,
          47774447, 47774474, 47774744, 47777444, 74444777, 74447477,
          74447747, 74447774, 74474477, 74474747, 74474774, 74477447,
          74477474, 74477744, 74744477, 74744747, 74744774, 74747447,
          74747474, 74747744, 74774447, 74774474, 74774744, 74777444,
          77444477, 77444747, 77444774, 77447447, 77447474, 77447744,
          77474447, 77474474, 77474744, 77477444, 77744447, 77744474,
          77744744, 77747444, 77774444, 4444477777};
    for (int i = 0; i < v.size(); i++)
    {
        if (x <= v[i])
        {
            cout << v[i];
            return 0;
        }
    }
}