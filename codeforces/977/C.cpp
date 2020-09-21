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
    ll x,y,val,cnt=0;
    cin>>x>>y;

    ll a[x];
    for(ll i=0; i<x; i++)
    {
        cin>>a[i];
    }
    sort(a,a+x);

    if(y==0)
    {
        val = a[0]-1;
    }
    else
    {
        val = a[y-1];
    }
    for(ll i=0; i<x; i++)
    {
        if(a[i]<=val)
        {
            ++cnt;
        }
    }
    if(cnt!=y || !(1<=val && val<=1000*1000*1000))
    {
        cout<<-1;
        return 0;
    }
    cout<<val;
}
