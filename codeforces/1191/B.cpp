#include <bits/stdc++.h>
//#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
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
    int a[3];
    string s;

    for (int i = 0; i < 3; i++)
    {
        cin >> s;
         a[i] = (s[0] - '0') + (s[1] - 'a')*100;
    }

    sort(a, a + 3);
    int x = a[1] - a[0];
    int y = a[2] - a[1];

    if (x == y && (x == 1 || x == 0))
    {
       cout<<0;
    }
    else if (x == 0 || x == 1 || x == 2 || y == 0 || y == 1 || y == 2)
    {
      cout<<1;
    }
    else
        cout<<2;
}