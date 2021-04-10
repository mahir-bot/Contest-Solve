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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int x = d / b;
    int ans;
    if (x < c || d < c || b >= a)
    {
        if (a % b == 0)
        {
            ans = a / b * d;
        }
        else if (b >= a)
        {
            ans = min(a * c, d);
        }
        else
        {
            if (d > c)
                ans = a / b * d + (a - (a / b) * b) * c;
            else
                ans = a / b * d + d;
        }
    }
    else
    {
        ans = a * c;
    }
    cout << ans;
}