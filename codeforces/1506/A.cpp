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
#define ull unsigned ll
using namespace std;

///cout<<"Case "<<z++<<": "<<__<<endl;
int main()
{
    ll x;
    cin >> x;
    while (x--)
    {
        ll a, b, c, ans = 0;
        cin >> a >> b >> c;
        if ((a * b) == c)
        {
            ans = c;
        }
        else
        {
            ll vag = c / a;
            ll vga = vag * a;
            if (vga == c || c % a == 0)
            {
                ll bbb = b * (a - 1);
                ans = bbb + vag;
            }
            else
            {
                ll baki = c - vga - 1;
                ll un = baki * b;
                ans = un + vag + 1;
            }
        }

        cout << ans << endl;
    }
}
