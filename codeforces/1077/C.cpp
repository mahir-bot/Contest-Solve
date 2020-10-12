#include<bits/stdc++.h>
#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  pi    acos(-1.0)
#define  ll    long long
#define  EPS   1e-12
#define  mx    2000005
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
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
    ll x,ans=0;
    cin>>x;
    ll arr[x+1];
    map <ll,ll> mp;
    vll v;
    for(int i=0; i<x; i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
        ans+=arr[i];
    }
    for(int i=0; i<x; i++)
    {
        ll val=ans-arr[i];
        if(val%2)
        {
            continue;
        }
        if(val/2==arr[i]&&mp[val/2]>1)
        {
            v.pb(i+1);
        }
        else if(val/2!=arr[i]&&mp[val/2])
        {
            v.pb(i+1);
        }
    }
    cout<<v.size()<<endl;
    for(auto k:v)
    {
        cout<<k<<" ";
    }
}
