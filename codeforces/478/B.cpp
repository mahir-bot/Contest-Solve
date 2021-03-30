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
    ull n, m;
    cin >> n >> m;
    ull val = n - m;
    val += 1;
    ull high = val * (val - 1) / 2;
    ull low = 0, ans = 0;
    if (n % m == 0)
    {
        low = n / m;
        ans = low * (low - 1) / 2;
        ans *= m;
    }
    else
    {
        ull a = n % m;
        ull b = n / m;
        ull c = m - a;
        ull d = (b * (b - 1) / 2) * c;
        ull e = (b * (b + 1) / 2) * a;
        ans = d + e;
    }

    cout << ans << " " << high;
}
