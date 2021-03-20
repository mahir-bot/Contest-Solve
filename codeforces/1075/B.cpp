#include <bits/stdc++.h>
//#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define MV 1e18
#define mx 2000
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
using namespace std;

///cout<<"Case "<<z++<<": "<<__<<endl;
int main()
{
    ll a, b;
    cin >> a >> b;
    vll v, vv, ww;
    mll m;
    map<ll, ll>::iterator itr;
    ll t = a + b;
    for (ll i = 0; i < t; i++)
    {
        ll d;
        cin >> d;
        v.pb(d);
    }
    for (ll i = 0; i < t; i++)
    {
        ll d;
        cin >> d;
        if (d == 0)
            vv.pb(v[i]);
        else
            ww.pb(v[i]);
    }
    sort(vv.begin(), vv.end());
    sort(ww.begin(), ww.end());
    for (ll i = 0; i < b; i++)
    {
        m[ww[i]] = 0;
    }

    ll cns = 0;

    for (auto k : vv)
    {
        ll hi = upper_bound(ww.begin(), ww.end(), k) - ww.begin();
        ll lo = hi - 1;
        if (lo < 0)
        {
            if (hi < ww.size())
                m[ww[hi]]++;
        }
        else if (hi >= ww.size())
        {
            if (lo >= 0)
            {
                m[ww[lo]]++;
            }
        }
        else
        {
            if (abs(ww[lo] - k) <= abs(ww[hi] - k))
            {
                m[ww[lo]]++;
            }
            else
            {
                m[ww[hi]]++;
            }
        }
    }
    for (itr = m.begin(); itr != m.end(); ++itr)
    {
        cout << itr->second << " ";
    }
}
