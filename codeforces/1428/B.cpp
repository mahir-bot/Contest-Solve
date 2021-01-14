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
        int y, z;
        cin >> y;
        z = y;
        string s;
        cin >> s;
        s += s[0];
        int sum = 0;
        bool a = false;
        bool b = false;
        for (int i = 0; i < y; i++)
        {
            if (s[i] == '<')
            {
                a = true;
            }
            if (s[i] == '>')
            {
                b = true;
            }
        }
        if (a && b)
        {
            for (int i = 0; i < y; i++)
            {
                if (s[i] == '-' || s[i + 1] == '-')
                {
                    sum++;
                }
            }
            cout << sum << endl;
        }
        else
        {
            cout << y << endl;
        }
    }
}