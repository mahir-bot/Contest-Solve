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
    int four = 0;
    int three = 0;
    int two = 0;
    int one = 0;
    int ans = 0;

    for (int i = 0; i < x; i++)
    {
        int y;
        cin >> y;
        if (y == 4)
        {
            four++;
        }
        if (y == 3)
        {
            three++;
        }
        if (y == 2)
        {
            two++;
        }
        if (y == 1)
        {
            one++;
        }
    }

    if (one > three)
    {
        int lft = one - three;

        int lf = (lft + (two * 2)) / 4;
        if ((lft + (two * 2)) % 4 != 0)
        {
            ans += 1;
        }
        ans += four + lf + three;
    }

    else
    {
        int kk = two / 2;
        if (two % 2 != 0)
        {
            ans += 1;
        }
        ans += three + kk + four;
    }
    cout << ans;
}