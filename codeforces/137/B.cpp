#include <bits/stdc++.h>
using namespace std;

int main()
{
   int x,y=0,z=0,arr[5001],i=0,j=0,k,l;
   cin>>x;
   y=x;
   while(x--)
   {
       cin>>arr[i];
       i++;
   }
   sort(arr,arr+y);
   for(k=1;k<=y;k++)
   {
       for(l=0;l<y;l++)
       {
           if(arr[l]==k)
           {
               z++;
               break;
           }
       }

    }
   cout<<y-z;
}
