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
    ll x;
    cin>>x;
    while(x--)
    {
        ll y,a=INT_MAX,b=INT_MAX,res=0;
        cin>>y;
        ll can[y],ora[y];
        for(ll i=0;i<y;i++)
        {
            cin>>can[i];
            if(can[i]<a)
            {
                a=can[i];
            }
        }
        for(ll i=0;i<y;i++)
        {
            cin>>ora[i];
             if(ora[i]<b)
            {
                b=ora[i];
            }
        }

        for(ll i=0;i<y;i++)
        {
            ll q=0,w=0,m=0;
            if(can[i]>a && ora[i]>b)
            {
                q=can[i]-a;
                w=ora[i]-b;
                m=max(q,w);
                res+=m;
            }
            else if(can[i]>a && ora[i]==b)
            {
                q=can[i]-a;
                w=ora[i]-b;
                m=max(q,w);
                res+=m;
            }
            else if(can[i]==a && ora[i]>b)
            {
                q=can[i]-a;
                w=ora[i]-b;
                m=max(q,w);
                res+=m;
            }
        }
        cout<<res<<endl;

    }
}
