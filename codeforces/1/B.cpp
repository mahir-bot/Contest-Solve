#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
using namespace __gnu_cxx;
using namespace std;
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define ull unsigned ll
#define EPS 1e-12
#define MV 1e18
#define MX 10000008
#define mx 2000056
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define MEM(a, x) memset(a, x, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define vii vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pip pair<int, pii>
#define pul pair<ull, ull>
#define mii map<int, int>
#define mll map<ll, ll>
#define qii queue<int>
#define dii deque<int>
#define vip vector<pair<int, int>>
#define vlp vector<pair<ll, ll>>
#define djk priority_queue<pll, vlp, greater<pll>>
#define pb push_back
#define mp make_pair
const int INF = INT_MAX;
int fx[] = {+1, -1, +0, +0};
int fy[] = {+0, +0, +1, -1};

// freopen("data.txt", "r", stdin);
// freopen("dataOut.txt", "w", stdout);
///cout<<"Case "<<z++<<": "<<__<<endl;

typedef bool (*comp)(pii, pii);

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        string s;
        cin >> s;
        string shob = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        bool chk1 = false, chk2 = false, chk3 = false;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'R')
            {
                chk1 = true;
            }
            if (s[i] < 65)
            {
                chk3 = true;
            }
            if (chk1 && chk3 && s[i] == 'C')
            {
                chk2 = true;
            }
        }
        if (s[0] == 'R' && chk1 && chk2)
        {
            string a = ""; // dorkar nai

            string b = ""; // game col
            int pp = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == 'R')
                {
                    continue;
                }
                else if (s[i] == 'C')
                {
                    pp = 1;
                    continue;
                }
                else if (pp == 0)
                {
                    a += s[i];
                }
                else
                {
                    b += s[i];
                }
            }

            stringstream num(b);
            ll rem = 0;
            num >> rem;
            string ans = "";
            while (rem > 0)
            {
                if (rem % 26 == 0)
                {
                    rem = (rem / 26) - 1; //corner -> 52/2 = 2 -1 =>"A"
                    ans += 'Z';
                }
                else
                {
                    int remaindr = rem % 26;
                    ans += shob[remaindr - 1];
                    rem /= 26;
                }
            }
            reverse(ans.begin(), ans.end());
            cout << ans << a << endl;
        }
        else
        {
            string a = "";
            string b = "";
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] >= 65 && s[i] <= 90)
                {
                    a += s[i];
                }
                else
                {
                    b += s[i];
                }
            }

            ll ans = 0;
            //4321 FJE

            for (int i = 0; i < a.size(); i++)
            {
                int kk = a[i] - 'A';
                kk++;
                ans = ans * 26 + kk;
            }

            cout << "R" << b << "C" << ans << endl;
        }
    }
}