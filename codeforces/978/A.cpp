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
    int x,y,in;
    cin>>x;
    vii v(x),z;
    for(int i=0; i<x; i++)
    {
        cin>>v[i];
    }
    for(int i=0; i<x; i++)
    {
        y = v[i];
        vii ::iterator it = find(z.begin(),z.end(),y);
        if(it!=z.end())
        {
            in = std::distance(z.begin(),it);
            z.erase(z.begin()+in);
            z.pb(y);

        }
        else
        {
            z.pb(y);
        }
    }
    cout<<z.size()<<endl;
    for(auto k:z)
    {
        cout<<k<<" ";
    }


}
