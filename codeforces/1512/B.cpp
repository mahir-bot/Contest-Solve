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
    while (x--)
    {
        int p;
        cin >> p;
        char c;
        int x, y, xx, yy;
        int a, b;
        bool as = false;
        for (int i = 1; i <= p; i++)
        {
            for (int j = 1; j <= p; j++)
            {
                cin >> c;

                if (c == '*' && as == false)
                {
                    x = i;
                    y = j;
                    as = true;
                }
                if (c == '*' && as == true)
                {
                    xx = i;
                    yy = j;
                }
            }
        }

        if (x == xx)
        {
            a = y;
            b = yy;
            if (xx < p)
            {
                xx = x + 1;
            }
            else
            {
                x -= 1;
            }
        }
        else if (y == yy)
        {
            a = y;
            b = yy;
            if (y < p)
            {
                b += 1;
            }
            else
            {
                a -= 1;
            }
        }
        else
        {
            a = y;
            b = yy;
        }

        for (int i = 1; i <= p; i++)
        {
            for (int j = 1; j <= p; j++)
            {
                if (i == x && (j == a || j == b))
                {
                    cout << "*";
                }

                else if (i == xx && (j == a || j == b))
                {
                    cout << "*";
                }
                else
                {
                    cout << ".";
                }
            }
            cout << endl;
        }
    }
}