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
   for(k=1;k<y-1;k++)
   {
          if(arr[k-1]==1 && arr[k+1]==1 && arr[k]==0)
           {
               z++;
               arr[k+1]=0;
           }

    }

   cout<<z;
}
