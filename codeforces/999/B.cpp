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
    int x,sz=0,z=0;
    string s;
    cin>>x>>s;
    vii v;
    sz= s.size();
    for(int i=1; i<=x; i++)
    {
        if(sz%i==0)
        {
            reverse(s.begin(),s.begin()+i);
        }
    }
    cout<<s;

}
