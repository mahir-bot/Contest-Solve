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
        ll a, b;
        cin >> a >> b;
        ll m, n, o;
        if (a % 2 != 0)
        {
            m = 1;
            n = a / 2;
            o = n;
        }
        else if (a % 4 == 0)
        {
            m = a / 2;
            n = a / 4;
            o = n;
        }
        else if (a % 4 != 0)
        {
            m = 2;
            n = (a / 2) - 1;
            o = n;
        }

        cout << m << " " << n << " " << o << endl;
    }
}