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
    ll x;
    cin >> x;
    while (x--)
    {
        bool ans = true;
        ll a, b;
        cin >> a >> b;
        vll v;
        ll t = a / 2;
        if (a == b)
        {
            for (ll i = 0; i < b; i++)
            {
                v.pb(1);
            }
        }
        else if (a % 2 == 0)
        {
            if (b > a)
            {
                ans = false;
            }
            else if (b > t && b % 2 != 0)
            {
                ans = false;
            }
            else if (b > t && b % 2 == 0)
            {
                for (ll i = 1; i < b; i++)
                {
                    v.pb(1);
                }
                v.pb((a - b) + 1);
            }
            else
            {
                ll lef = t - b;
                if (t == b)
                {
                    for (ll i = 1; i <= b; i++)
                    {
                        v.pb(2);
                    }
                }
                else if (b == 1 && lef == 0)
                {

                    v.pb(a);
                }
                else
                {
                    for (ll i = 1; i < b; i++)
                    {
                        v.pb(2);
                    }
                    if (lef)
                    {
                        v.pb((2 * lef) + 2);
                    }
                }
            }
        }
        else
        {
            if (b > a)
            {
                ans = false;
            }
            else if (b % 2 == 0)
            {
                ans = false;
            }
            else
            {
                ll lef = a - b;
                for (ll i = 1; i < b; i++)
                {
                    v.pb(1);
                }
                if (lef)
                {
                    v.pb(lef + 1);
                }
            }
        }
        if (ans)
        {
            cout << "YES" << endl;
            for (auto k : v)
            {
                cout << k << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
