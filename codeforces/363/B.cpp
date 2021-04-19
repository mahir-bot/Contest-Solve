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
/*freopen("data.txt","r",stdin);
	freopen("dataOut.txt","w",stdout);*/
///cout<<"Case "<<z++<<": "<<__<<endl;

int main()
{
    int x, y, p;
    cin >> x >> y;
    vii v(x);
    for (auto &k : v)
    {
        cin >> k;
    }
    int maxx = INT_MAX;
    int cur = 0;
    int ind = 0;
    for (int j = 0; j < y; j++)
    {
        cur += v[j];
    }
    maxx = cur;
    p = y;

    for (int i = 0; i <= x - y; i++)
    {

        if (cur < maxx)
        {
            maxx = cur;
            ind = i;
        }
        cur -= v[i];
        cur += v[p];

        p++;
    }
    cout << ind + 1;
}