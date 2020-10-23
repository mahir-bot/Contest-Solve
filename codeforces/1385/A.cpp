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
        int a,b,c;
        cin>>a>>b>>c;
        if(max(a,c)==b)
        {
            cout<<"YES"<<endl<<a<<" "<<1<<" "<<c<<endl;
        }
        else if(max(a,b)==c)
        {
            cout<<"YES"<<endl<<a<<" "<<1<<" "<<b<<endl;
        }
        else if(max(b,c)==a)
        {
            cout<<"YES"<<endl<<1<<" "<<a<<" "<<b<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
