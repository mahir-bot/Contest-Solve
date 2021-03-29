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
    int z = x;
    vll v;
    while (x--)
    {
        ll y;
        cin >> y;
        v.pb(y);
    }
    vll a(v);
    int cnt = 0, cnt1 = 0, fin = 0;
    sort(a.begin(), a.end());
    for (int i = 0; i < z; i++)
    {
        if (a[i] != v[i])
        {
            cnt = i;
            break;
        }
    }
    for (int i = z - 1; i >= 0; i--)
    {
        if (a[i] != v[i])
        {
            cnt1 = i;
            break;
        }
    }
    for (fin = cnt; fin < cnt1; fin++)
    {
        if (v[fin] < v[fin + 1]) ///since we have to reverse the array...
        {
            break;
        }
    }
    if (fin == cnt1)
    {
        cout << "yes" << endl
             << cnt + 1 << " " << cnt1 + 1;
    }
    else
        cout << "no";
}
