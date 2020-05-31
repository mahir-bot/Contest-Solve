#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<0<<endl;
            continue;
        }
        else if(a%2!=0&&b%2!=0)
        {
            if(a<b)
            cout<<2<<endl;
            else
            cout<<1<<endl;
        }
        else if(a%2==0&&b%2==0)
        {
            if(a<b)
            cout<<2<<endl;
            else
            cout<<1<<endl;
        }
        else if(a%2!=0&&b%2==0)
        {
            if(a<b)
            cout<<1<<endl;
            else
            cout<<2<<endl;
        }
        else if(a%2==0&&b%2!=0)
        {
            if(a<b)
            cout<<1<<endl;
            else
            cout<<2<<endl;
        }
    }

}
