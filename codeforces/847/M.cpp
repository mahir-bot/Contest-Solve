#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z,arr[1001],j=0,k=1,m=0;
    cin>>x;
    m=x;
    while(x--)
    {
        cin>>arr[j];

        j++;
    }
    for(int i=1;i<m;i++)
    {
        if(arr[i-1]-arr[i]==arr[i]-arr[i+1])
        {
            k++;
        }
    }
    if(k==m-1)
    {
        cout<<arr[m-1]-(arr[0]-arr[1]);
    }
    else
        cout<<arr[m-1];
}
