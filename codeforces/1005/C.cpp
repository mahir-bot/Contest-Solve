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
    vii v2;
    int two=1,cal=2;
    for(int l=0; l<=30; l++)
    {
        two *= cal;
        v2.pb(two);

    }
    two = two*2;
    ll x,i=0,cnt=0;
    cin>>x;
    vii v(x);
    map <int,int> mp;
    while(x--)
    {
        cin>>v[i];
        mp[v[i]]++;
        i++;
    }
    for(int j=0; j<i; j++)
    {
        ll val=0,chk=0,cap=0;
        cap = v[j];
        mp[cap]--;
        for(int k=0; k<=30; k++)
        {
            if(v2[k]>cap)
            {
                val = v2[k]-cap;
                if(mp[val])
                {
                    chk=1;
                    break;
                }
            }
        }
        if(!chk)
        {
            cnt++;
        }
        else
            mp[cap]++;
    }
    cout<<cnt<<endl;
}
