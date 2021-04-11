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
    while (x--)
    {
        ll y;
        cin >> y;
        vll v;
        ll u = y + 2;
        ll sum = 0;
        for (ll p = 0; p < u; p++)
        {
            ll l;
            cin >> l;
            v.pb(l);
            sum += l;
        }

        sort(v.begin(), v.end());
        sum -= v.back();
        ll w = -1;
        ll ii = y + 1;

        for (ll i = 0; i <= y; i++)
        {
            if (sum - v[i] == v.back())
            {
                w = i;
                break;
            }
        }
        if (w < 0)
        {
            ii = y;
            sum -= v[y];
            if (v[y] == sum)
            {
                w = y + 1;
            }
        }

        if (w < 0)
        {
            cout << -1 << endl;
        }
        else
        {
            for (ll i = 0; i < y + 2; i++)
            {
                if (i == w || i == ii)
                {
                    continue;
                }
                else
                {
                    cout << v[i] << " ";
                }
            }
            cout << endl;
        }
    }
}