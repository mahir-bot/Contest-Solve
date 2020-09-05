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
        int y,a,b,flag=0;
        cin>>y;
        int arr[y],arr1[y];
        for(int i=0; i<y; i++)
        {
            cin>>arr[i]>>arr1[i];
        }
        for(int i=0; i<y; i++)
        {
            if(arr[i]<arr1[i])
            {
                flag=1;
                break;
            }
            else if(arr[i]<arr1[i])
            {
                flag=1;
                break;
            }
            else
            {
                continue;
            }
        }
        for(int i=1; i<y; i++)
        {
            if(arr[i]<arr[i-1])
            {
                flag=1;
                break;
            }
            else if(arr1[i]<arr1[i-1])
            {
                flag=1;
                break;
            }
            else if((arr[i]-arr[i-1])<(arr1[i]-arr1[i-1]))
            {
                flag=1;
                break;
            }
        }

        if(flag==1)
        {
            cout<<"NO"<<endl;
        }

        else if(flag==0)
        {
            cout<<"YES"<<endl;
        }
    }
}
