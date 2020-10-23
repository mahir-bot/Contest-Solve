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
        int y;
        cin>>y;
        int arr[y];
        for(int i=0; i<y; i++)
        {
            cin>>arr[i];
        }

        int a=0,b=0,cnt=0;
        for(int i=1; i<y; i++)
        {
            if(abs(arr[i]-arr[i-1])>1)
            {
                a=i-1;
                b=i;
                cnt=1;
                break;
            }

        }
        if(cnt)
            cout<<"YES"<<endl<<a+1<<" "<<b+1<<endl;
        else
            cout<<"NO"<<endl;
    }
}
