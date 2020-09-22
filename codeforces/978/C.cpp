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
    ll dor,let,val=0,val2=0,j=0,ans=0,cnt=0;
    cin>>dor>>let;
    vll vd(dor),vl(let);
    for(ll i=0; i<dor; i++)
    {
        cin>>vd[i];
    }
    for(ll i=0; i<let; i++)
    {
        cin>>vl[i];
    }
    val = vd[0];
    for(ll i=0; i<let; i++)
    {
        if(vl[i]<=val)
        {
            cout<<j+1<<" "<<vl[i]-val2<<endl;
        }
        else if(vl[i]>val)
        {
            while(vl[i]>val)
            {
                j++;
                val2=val;
                val+=vd[j];
            }
            cout<<j+1<<" "<<vl[i]-val2<<endl;;
        }
    }
}
