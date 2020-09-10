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
int main()
{

    ll x,y;
    cin>>x>>y;
    string s;
    cin>>s;
    char c[y];
    for(ll i=0; i<y; i++)
    {
        cin>>c[i];
    }

    ll ans=0,val=0;

    for(ll i=0; i<x; i++)
    {
        ll cnt=0;
        for(ll j=0; j<y; j++)
        {
            if(s[i]==c[j])
            {
                cnt++;
                break;
            }
        }

        if(cnt!=0)
        {
            val++;
        }
        else
        {
            ans+=(val*(val+1))/2;
            val=0;
        }

    }

    ans+=(val*(val+1))/2;
    cout<<ans;
}
