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
        string y;
        cin>>y;
        int a=-1,b=-1,c=-1,ans=300000,ans1=0;
        for(int i=0; i<y.size(); i++)
        {
            if(y[i]=='1')
            {
                a=i;
            }
            else if(y[i]=='2')
            {
                b=i;
            }
            else
            {
                c=i;
            }
            if(a!=-1 && b!=-1 & c!=-1)
            {
                int maxx = max(a,max(b,c));
                int minn = min(a,min(b,c));
                ans1 = maxx-minn+1;
                ans = min(ans,ans1);
            }
        }
        if(ans==300000)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
}



