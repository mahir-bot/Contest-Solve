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
    vll v(a);
    ll f = 0, s = 0;
    vll vf, vs;
    for (auto &k : v)
    {
        cin >> k;
        if (k > 0)
        {
            f += k;
            vf.pb(k);
        }
        else
        {
            s += abs(k);
            vs.pb(abs(k));
        }
    }
    if (f > s)
    {
        cout << "first" << endl;
    }
    else if (f < s)
    {
        cout << "second" << endl;
    }
    else
    {
        bool first = false;
        bool second = false;
        int ans = 0;
        if (v[a - 1] > 0)
        {
            first = true;
        }
        else
        {
            second = true;
        }

        for (int i = 0; i < min(vf.size(), vs.size()); i++)
        {
            if (vf[i] > vs[i])
            {
                ans = 1;
                break;
            }
            else if (vf[i] < vs[i])
            {
                ans = 2;
                break;
            }
        }
        if (ans == 1)
        {
            cout << "first" << endl;
        }
        else if (ans == 2)
        {
            cout << "second" << endl;
        }
        else
        {
            if (first)
            {
                cout << "first" << endl;
            }
            else
            {
                cout << "second" << endl;
            }
        }
    }
}
