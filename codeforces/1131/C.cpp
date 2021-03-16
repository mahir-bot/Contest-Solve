#include <bits/stdc++.h>
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define mx 2000005
#define vii vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vip vector<pair<int, int>>
#define vlp vector<pair<ll, ll>>
#define pb push_back
#define mp make_pair
using namespace std;

int main()
{
    ll x;
    cin >> x;
    vll v(x);
    for (ll &i : v)
    {
        cin >> i;
    }
    sort(v.begin(), v.end());
    vll a, b;
    ll val = 1;
    for (auto k : v)
    {
        if (val % 2 == 0)
        {
            b.pb(k);
        }
        else
        {
            a.pb(k);
        }
        val++;
    }
    reverse(b.begin(), b.end());
    for (auto j : a)
    {
        cout << j << " ";
    }
    for (auto p : b)
    {
        cout << p << " ";
    }
}
