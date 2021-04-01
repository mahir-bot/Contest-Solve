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
int ans = 0;
int vis[mx];
vii v[mx];
void dfs(int p, int cnt)
{
    vis[p] = 1;
    ans = max(ans, cnt);
    for (int i = 0; i < v[p].size(); i++)
    {
        dfs(v[p][i], cnt + 1);
    }
}
int main()
{
    int x;
    cin >> x;

    for (int i = 1; i <= x; i++)
    {
        int b;
        cin >> b;
        if (b == -1)
        {
            v[0].pb(i);
        }
        else
        {
            v[b].pb(i);
        }
    }

    for (int i = 0; i <= x; i++)
    {
        if (vis[i] == 0)
            dfs(i, 1);
    }
    cout << ans - 1;
}
