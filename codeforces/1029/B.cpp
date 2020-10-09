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
    ll x,cnt=0,val=1;
    cin>>x;
    vll v(x);
    for(ll i=0; i<x; i++)
    {
        cin>>v[i];
    }
    for(ll i = 1; i<x; i++)
    {
        if(v[i-1]*2>=v[i])
        {
            cnt++;

            if(i+1<x && v[i]*2<v[i+1])
            {
                cnt++;
            }
            if(i+1==x)
            {
                cnt++;
            }
            if(cnt>val)
            {
                val=cnt;
            }
        }
        else if(v[i-1]*2<v[i])
        {
            cnt=0;
        }
    }

    cout<<val;
}
