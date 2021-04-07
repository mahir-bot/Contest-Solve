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

    int x;
    cin >> x;
    vii v;
    v.pb(4);
    v.pb(44);
    v.pb(444);
    v.pb(47);
    v.pb(74);
    v.pb(447);
    v.pb(744);
    v.pb(747);
    v.pb(474);
    v.pb(777);
    v.pb(77);
    v.pb(7);
    v.pb(774);
    v.pb(477);
    sort(v.begin(), v.end());
    bool ans = false;
    for (int i = 0; i < 14; i++)
        if (x % v[i] == 0)
        {
            ans = true;
        }

    if (ans)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}