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
    string a,b;
    cin>>a>>b;
    int x,y,z=0,ans=0 ;


    for(int i=a.size()-1,j=b.size()-1; i>=0 && j>=0; i--,j--)
    {
        if(a[i]==b[j])
        {
            z++;
        }
        else
            break;

    }

    ans=(a.size()-z)+(b.size()-z);
    cout<<ans;
    return 0;


}
