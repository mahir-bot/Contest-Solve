#include<bits/stdc++.h>
#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  pi    acos(-1.0)
#define  ll    long long
#define  EPS   1e-12
#define  mx    2000005
#define  vii   vector<int>
#define  vll   vector<ll>
#define  pii   pair<int,int>
#define  pll   pair<ll,ll>
#define  vip   vector<pair<int,int>>
#define  vlp   vector<pair<ll,ll>>
#define  pb    push_back
#define  mp    make_pair
using namespace std;
bool cmp(string &a,string &b)
{
    return a.size()<b.size();
}

int main()
{
   ll x;
   cin>>x;
   vll v(x);
   for(ll i=0;i<x;i++)
   {
       cin>>v[i];
   }
   ll s1=0,s2=0,ans=0;
   ll x1=0,y1=x-1;
   while(x1<=y1)
   {
       if(s1<s2)
       {
           s1+=v[x1++];
       }
       else
       {
           s2+=v[y1--];
       }
       if(s1==s2 && s1>ans)
       {
           ans=s1;
       }
   }
   cout<<ans;
}
