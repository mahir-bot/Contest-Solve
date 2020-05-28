#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y=0,z=0,i,j=0,k=0,even=0,odd=0;
    cin>>x;
    while(x--)
    {
        even=0;odd=0;k=0;
        cin>>y;
        int arr[y];
        for(i=0;i<y;i++)
        {
            cin>>arr[i];
            if(arr[i]%2!=0)
            {
                odd++;
            }
            else
                even++;
        }
        sort(arr,arr+y);
        if(even%2==0 && odd%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {

            for(i=1;i<y;i++)
            {
                if(arr[i]-arr[i-1]==1)
                {
                    k=1;
                    break;
                }
            }
            if(k==1)
        {
            cout<<"YES"<<endl;
        }
        else if(k!=1)
            cout<<"NO"<<endl;
        }

    }

}

