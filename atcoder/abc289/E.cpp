#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
#include <vector>
using namespace std;
#define pb push_back
const int E = 5000 + 11;
const int INF = 0x3f3f3f3f;





std::vector<int> g[E];

int color[E];
int ans = 0;
int a,b;
bool vis[E][E];



void clr()
{
    for (int i = 0; i<=a; i++)
    {
        g[i].clear();
    }

    memset(vis,0,sizeof(vis));
    ans = 0;
    a=b=0;
    return;
}

int bfs()
{
    queue<pair<pair<int, int>, int> > q;
    q.push(make_pair(make_pair(1, a), 0));
    vis[1][a] = true;

    while (q.empty()==false)
    {
        pair<pair<int, int>, int> temp = q.front();
        int cur1 = temp.first.first;
        int cur2 = temp.first.second;
        int dis = temp.second;
        q.pop();

        if (cur1 == a && cur2 == 1) {
            return dis;

        }

        for (int i = 0; i < g[cur1].size(); i++) {
            for (int j = 0; j < g[cur2].size(); j++) {
                int to1 = g[cur1][i];
                int to2 = g[cur2][j];

                if (color[to1] == color[to2]) continue;
                if (vis[to1][to2]) continue;

                vis[to1][to2] = true;
                q.push(make_pair(make_pair(to1, to2), dis + 1));
            }
        }
    }

    return -1;
}




void solve()
{
    /*

    */


    cin>>a>>b;


    for (int i=1; i<=a; i++)
        cin>>color[i];

    for (int i = 0; i<b; i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);
    }

    cout<<bfs()<<'\n';
    // cout<<ans<<nl;
    clr();




}



signed main()
{
    // FIO;
    ios_base::sync_with_stdio(0);

    cin.tie(0);

    cout.tie(0);
    int tt;
    cin>>tt;

    while (tt--)
        solve();

}