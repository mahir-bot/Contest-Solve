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
string str;
int main()
{
    ll x,z,flag = 0,num=0,fst=0,snd=0;

    cin>>x>>str;
    for(int i=0; i<x; i++)
    {
        if(str[i]=='4' || str[i]=='7')
        {
            if(i<x/2)
                fst+=str[i]-48;
            else
                snd+=str[i]-48;
        }
        else
            flag=1;


    }

    if(fst==snd && flag==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
