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
    int a,b,n,ans=0,flag=0;
    cin>>a>>b>>n;

    for(int i=1;; i++)
    {
        if(i%2!=0)
        {
            ans=__gcd(a,n);
            n-=ans;
            if(n<ans)
            {
                flag=0;
                break;
            }
        }
        else if(i%2==0)
        {
            ans=__gcd(b,n);
            n-=ans;
            if(n<ans)
            {
                flag=1;
                break;
            }
        }

    }

    cout<<flag;
}
