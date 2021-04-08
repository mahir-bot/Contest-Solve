#include <bits/stdc++.h>
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define mx 1000000 + 10
#define vii vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vip vector<pair<int, int>>
#define vlp vector<pair<ll, ll>>
#define pb push_back
#define mp make_pair
#define ull unsigned ll
using namespace std;

int main()
{
    ll x, y;
    cin >> x >> y;
    vll v(x);
    for (auto &k : v)
    {
        cin >> k;
    }
    sort(v.begin(), v.end());
    double ans = 0;
    double a = 0, b = 0;
    if (v[0] != 0)
    {
        a = v[0];
    }
    if (v[x - 1] != y)
    {
        b = abs(y - v[x - 1]);
    }
    ans = max(a, b);
    for (ll i = 1; i < x; i++)
    {
        double p = abs(v[i] - v[i - 1]);
        p /= 2;
        ans = max(ans, p);
    }
    cout << fixed << setprecision(10) << ans;
}
