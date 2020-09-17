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

ll val(ll y)
{
    ll k1=10,k2=0;
    while(y>0)
    {
        ll h = y%10;
        y/=10;
        k1 = min(k1,h);
        k2 = max(k2,h);
    }
    return k1*k2;
}

int main()
{
    ll x;
    cin>>x;
    while(x--)
    {
        ll y,z;
        cin>>y>>z;
        z--;
        while(z--)
        {

            ll a = val(y);
            if(a==0)
            {
                break;
            }
            y+=a;
        }
        cout<<y<<endl;
    }
}



