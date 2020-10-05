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
bool cmp(string &a,string &b)
{
    return a.size()<b.size();
}

int main()
{
    vii v,v1;
    map <ll,ll> m;
    int x,y,z,ans=0,cnt=0;
    cin>>x>>y;
    for(int i=0; i<x; i++)
    {
        cin>>z;
        v.pb(z);
        v1.pb(z);
    }
    sort(v1.rbegin(),v1.rend());
    for(int i=0; i<y; i++)
    {
        m[v1[i]]++;
        ans+=v1[i];
    }
    cout<<ans<<endl;
    for(int i=0; i<x; i++)
    {
        cnt++;
        if(m[v[i]]&&y>1)
        {
            m[v[i]]--;
            cout<<cnt<<" ";
            cnt=0;
            y--;
        }
    }
    cout<<cnt;
}
