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
    int x;
    cin>>x;
    while(x--)
    {
        int y,flag=1;
        cin>>y;
        string str;
        cin>>str;
        for(int i=1; i<y; i++)
        {
            if(str[i]<str[i-1])
            {
                flag=0;
            }

        }
        if(flag)
        {
            cout<<str<<endl;
            continue;
        }
        string a;
        for(int i=0; i<y; i++)
        {
            if(str[i]=='1')
            {
                break;
            }
            a.pb('0');
        }
        a.pb('0');
        for(int i=y-1; i>=0; i--)
        {
            if(str[i]=='0')
            {
                break;
            }
            a.pb('1');
        }

        cout<<a<<endl;
    }
}
