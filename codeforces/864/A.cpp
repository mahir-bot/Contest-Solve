#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x=0,y=0,z,arr[1001],h=0,f=0,m=1;
    cin>>z;
    x=z;
    while(z--)
    {
        cin>>arr[y];
        y++;
    }

    sort(arr,arr+y);

    for(int i=0;i<x;i++)
    {
        if(arr[0]==arr[i])
        {
            h++;

        }
        else if(arr[x-1]==arr[i])
           {
               f++;
           }
         else if(arr[0]!=arr[i] && arr[x-1]!=arr[i])
           {
               m++;
           }


    }
    if(m<3 && h==f)
    {
        cout<<"YES"<<endl<<arr[0]<<" "<<arr[x-1];
    }
    else
        cout<<"NO";
}
