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
    int arr[101],x,res=0,minn=INT_MAX,maxx=0,dec=0,hig,low;
    cin>>x;
    while(x--)
    {
        cin>>arr[dec];
        dec++;
    }
    for(int i=0; i<dec; i++)
    {
        if(arr[i]>maxx)
        {
            maxx=arr[i];
            hig=i;
        }
        if(arr[i]<=minn)
        {
            minn=arr[i];
            low=i;
        }
    }
    if(hig<low)
    {
        res+=hig;
        res+=dec-low-1;
    }
    else if(hig>low)
    {
        res+=hig;
        res+=dec-low-2;
    }
    cout<<res;
}
