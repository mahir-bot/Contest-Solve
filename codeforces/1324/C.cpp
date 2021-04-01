#include <bits/stdc++.h>
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define mx 1000000 + 10
#define vii vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vip vector<pair<int, int>>
#define vlp vector<pair<ll, ll>>
#define pb push_back
#define mp make_pair
#define ull unsigned ll
using namespace std;

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        string s;
        cin >> s;
        vii v;
        v.pb(0);
        int ans = 0;

        int k = s.length();
        for (int i = 0; i < k; i++)
        {
            if (s[i] == 'R')
            {
                v.pb(i + 1);
            }
        }
        v.pb(k + 1);
        for (int i = 1; i < v.size(); i++)
        {
            ans = max(ans, v[i] - v[i - 1]);
        }
        cout << ans << endl;
    }
}
