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
int main()
{

    int y,flag=0,ev=0;
    string s;
    cin>>y;
    cin>>s;
    if(y%2!=0)
    {
        cout<<"No";
        return 0;
    }
    for(int i=0; i<y; i++)
    {
        if(s[i]=='(')
        {
            ev++;
        }
        else
        {
            ev--;
        }
        if(ev<=-2)
        {
            flag=1;
        }
    }

    if(flag==0 && ev==0)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}



