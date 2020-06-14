#include <bits/stdc++.h>
using namespace std;

int main()
{
   int x,y,z;
   cin>>x;
   while(x--)
   {
       cin>>y>>z;
       int arr[y],odd=0,even=0,tot=0;
       for(int i=0;i<y;i++)
       {
           cin>>arr[i];
           if(arr[i]%2==0)
           {
               even++;
           }
           else
           {
               odd++;
           }

        }
        if(odd==0)
        {
            cout<<"No"<<endl;
            continue;
        }
        if(odd==y && z%2==0)
        {
            cout<<"No"<<endl;
            continue;
        }
        if(y==z && odd%2==0)
        {
            cout<<"No"<<endl;
            continue;
        }
        cout<<"Yes"<<endl;
   }
}
