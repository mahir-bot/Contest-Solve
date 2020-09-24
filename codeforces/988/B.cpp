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
    int x,cnt=1;
    cin>>x;
    vector<string> v(x);
    for(int i=0; i<x; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0; i<x; i++)
    {
        for(int j=i+1; j<x; j++)
        {
            if(v[j].find(v[i])==-1)
            {
                cnt=0;
                break;
            }
        }
        if(cnt==0)
        {
            break;
        }
    }
    if(cnt)
    {
        cout<<"YES"<<endl;
        for(auto k:v)
        {
            cout<<k<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
