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
    int x;
    cin>>x;
    while(x--)
    {
        int y,a=-1,b=-1,cnt=0,t=0,ans=0;
        cin>>y;
        int arr[y];
        for(int i=0; i<y; i++)
        {
            cin>>arr[i];
        }
        for(int i=t; i<y; i++)
        {

          a=-1,b=-1,cnt=0;
            if(arr[i]==1)
            {
                a=1;
                for(int j=i+1; j<y; j++)
                {
                    if(arr[j]==0)
                    {
                        cnt++;
                    }
                    else
                    {
                        b=1;
                        t=j;
                        break;
                    }
                }
            }
            if(a==1 && b==1)
            {
                ans+=cnt;
            }

        }
       cout<<ans<<endl;

    }
}
