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
    ll x;
    cin>>x;
    while(x--)
    {
        ll y,val=0;
        cin>>y;
        vll vec(y),v(32,0);
        for(int i=0; i<y; i++)
        {
            cin>>vec[i];
        }
        for(int i=0; i<y; i++)
        {
            int cnt = -1;
            for(int j=31; j>=0; j--)
            {
                if(vec[i]&(1<<j))
                {
                    val+=v[j];
                    v[j]++;
                    break;
                }
            }

        }
        cout<<val<<endl;

    }
}
