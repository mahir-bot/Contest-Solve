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
    ll x,y,sum=0,neg=0,val=0;
    cin>>x>>y;
    ll arr[x],arr1[x];
    vii v;
    for(ll i=0; i<x; i++)
    {
        cin>>arr[i]>>arr1[i];
        sum+=arr[i];
        neg = arr[i]-arr1[i];
        v.pb(neg);
    }
    sort(v.begin(),v.end());
    for(ll i=x-1; i>=0; i--)
    {
        if(sum<=y)
        {
            break;
        }
        else
        {
            sum-=v[i];
            val++;
        }
    }
    if(val==x&&sum>y)
    {
        cout<<-1;
    }
    else
    {
        cout<<val;
    }
}
