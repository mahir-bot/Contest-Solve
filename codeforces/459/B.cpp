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
    ll y = x;
    mll m;
    ll a = INT_MIN;
    ll b = INT_MAX;
    while (y--)
    {
        ll z;
        cin >> z;
        if (z > a)
        {
            a = z;
        }
        if (z < b)
        {
            b = z;
        }
        m[z]++;
    }
    if (a == b)
    {
        cout << a - b << " " << x * (x - 1) / 2;
    }
    else
        cout << a - b << " " << m[a] * m[b];
}
