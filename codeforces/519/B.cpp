#include <bits/stdc++.h>
//#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define MV 1e18
#define mx 1000000 + 10
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define vii vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mii map<int, int>
#define mll map<ll, ll>
#define vip vector<pair<int, int>>
#define vlp vector<pair<ll, ll>>
#define pb push_back
#define mp make_pair
#define ull unsigned ll
using namespace std;

///cout<<"Case "<<z++<<": "<<__<<endl;

int main()
{
    ll x;
    cin >> x;
    vii v, vv, vvv;
    for (ll i = 0; i < x; i++)
    {
        ll a;
        cin >> a;
        v.pb(a);
    }
    for (ll i = 0; i < x - 1; i++)
    {
        ll a;
        cin >> a;
        vv.pb(a);
    }
    for (ll i = 0; i < x - 2; i++)
    {
        ll a;
        cin >> a;
        vvv.pb(a);
    }
    sort(v.begin(), v.end());
    sort(vv.begin(), vv.end());
    sort(vvv.begin(), vvv.end());
    ll p, q;
    for (ll i = 0; i < x; i++)
    {
        if (v[i] != vv[i])
        {
            p = v[i];
            break;
        }
    }
    for (ll i = 0; i < x - 1; i++)
    {
        if (vv[i] != vvv[i])
        {
            q = vv[i];
            break;
        }
    }
    cout << p << endl
         << q << endl;
}