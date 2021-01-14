#include <bits/stdc++.h>
//#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define mx 210
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
    int x;
    cin >> x;
    while (x--)
    {
        int y;
        ll u = 1;
        cin >> y;
        vii a, b;
        for (int i = 0; i < y; i++)
        {
            int c;
            cin >> c;

            if (c >= 0)
            {
                a.pb(c);
            }
            else
            {
                b.pb(-c);
            }
            if (y == 5)
                u *= c;
        }
        int neg = b.size();
        int pos = a.size();
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        if (y == 5)
        {
            cout << u << endl;
        }
        else if (pos == 0)
        {
            reverse(b.begin(), b.end());
            u = 1;
            for (int i = 0; i < 5; i++)
            {
                u *= b[i];
            }
            cout << -u << endl;
        }
        else
        {
            ll val = 0;
            for (int i = 1; i < 6 && i <= pos; i += 2)
            {
                u = 1;
                for (int j = 0; j < i; j++)
                {
                    u *= a[j];
                }
                if (neg >= 5 - i)
                {
                    for (int j = 0; j < 5 - i; j++)
                    {
                        u *= b[j];
                    }
                    val = max(val, u);
                }
            }
            cout << val << endl;
        }
    }
}