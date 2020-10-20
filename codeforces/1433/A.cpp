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
        int y,cnt = 0,val=0,k=0,h=0,z;
        char a;
        cin>>y;
        z=y;
        string s;
        stringstream ss;
        ss<<y;
        ss>>s;

        if(s[0]=='1')
        {
            cnt = 1;

        }
        if(s[0]=='2')
        {
            cnt = 2;

        }
        if(s[0]=='3')
        {
            cnt = 3;

        }
        if(s[0]=='4')
        {
            cnt = 4;

        }
        if(s[0]=='5')
        {
            cnt = 5;

        }
        if(s[0]=='6')
        {
            cnt = 6;

        }
        if(s[0]=='7')
        {
            cnt = 7;

        }
        if(s[0]=='8')
        {
            cnt = 8;
        }
        if(s[0]=='9')
        {
            cnt = 9;
        }

        k = s.length();

        if(k==1)
        {
            h=1;
        }
        if(k==2)
        {
            h=3;
        }
        if(k==3)
        {
            h=6;
        }
        if(k==4)
        {
            h=10;
        }
        val = ((cnt-1)*10)+h;
        cout<<val<<endl;
    }

}
