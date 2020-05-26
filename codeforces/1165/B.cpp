#include <bits/stdc++.h>
using namespace std;

 int main()
{
  long long x=1,z=0,i,j,k=0,n,p;
   cin>>n;
   long long y[n];
   p=n;
   while(p--)
   {
       cin>>y[k];
       k++;
   }
   sort(y,y+n);
   for(i=0;i<n;i++)
   {
       if(y[i]>=x)
       {
           z++;
           x++;
       }
       else
        continue;
   }

   cout<<z;
}

