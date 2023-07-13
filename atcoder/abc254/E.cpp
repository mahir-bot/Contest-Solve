#include <bits/stdc++.h>
using namespace std;

void solve()
{
    /*

    */


    int a,b;
    cin>>a>>b;

    vector<std::vector<int>> G(a+10);


    for (int i = 0; i<b; i++)
    {
        int x,y;
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    vector<int> dist(a+10,-1);

    int d;
    cin>>d;

    while (d--)
    {
        int x,y;
        cin>>x>>y;

        queue<int>q;
        q.push(x);


        dist[x] = 0;
        vector<int> ans;

        while (q.empty()==false)
        {
            int now = q.front();
            q.pop();
            ans.push_back(now);

            if (dist[now]==y)
                continue;
            for (auto k:G[now])
            {
                if (dist[k]==-1)
                {
                    q.push(k);
                    dist[k] = dist[now]+1;
                }
            }
        }


        int ok = 0;
        for (int i=0; i<ans.size(); i++)
        {
            ok+=ans[i];
            dist[ans[i]] = -1;
        }
        cout<<ok<<endl;

    }







}



signed main()
{
    solve();
}