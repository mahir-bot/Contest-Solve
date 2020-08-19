#include<bits/stdc++.h>
#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  pi    acos(-1.0)
#define  ll    long long
#define  EPS   1e-12
#define  mx    2000005
#define  vii   vector<int>
#define  vll   vector<ll>
#define  pb    push_back
using namespace std;
ll val(ll x)
{
    for(ll i=2;i*i<=x;i++)
    {
        if(x%i==0)
        {
            return i;
        }
    }
    return x;
}
int main()
{
    ll x,cnt=0;
    cin>>x;
    if(x%2!=0)
    {
        x-=val(x);
        cnt++;
    }
    cout<<cnt+x/2;
}
