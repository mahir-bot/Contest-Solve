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

int main()
{
    map <string,int>mp;
    int x,val=0;
    string s,a,b;
    cin>>x>>s;
    for(int i=1; i<x; i++)
    {
        a+=s[i-1];
        a+=s[i];
        mp[a]++;
        a.clear();
    }
    for(auto j:mp)
    {
        if(j.second>val)
        {
            val=j.second;
            b=j.first;
        }
    }
    cout<<b;

}
