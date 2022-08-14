#include<bits/stdc++.h>
using namespace std;

#define nl endl
#define ll long long
#define pb push_back
vector<int>v[100];
int a,ans = 0;
void dfs(int node,int cnt)
{
//cout<<node<<nl;
       if(node==a)
       {
           ans= cnt;
           return;
       }

     for(auto k:v[node])
     {
        // cout<<k<<nl;
         dfs(k,cnt+1);
     }

}
void solve()
{

   cin>>a;
   for(int i = 2;i<=a;i++)
   {

       ll b;
       cin>>b;
       v[b].pb(i);
   }

    dfs(1,0);
   cout<<ans<<nl;

}
int main(int argc, char const *argv[])
{


 solve();
	return 0;
}
