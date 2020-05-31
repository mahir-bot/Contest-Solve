#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int a[n],sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    int h=n/2;
    sum=sum/h;
    for(int i =0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i]+a[j]==sum && i!=j)
            {
                cout<<i+1<<" "<<j+1<<"\n";
                a[j]=0;
                a[i]=0;
                break;
            }
        }
    }

}

