#include <bits/stdc++.h>

using namespace std;
int main()
{

  long long a,b,c,d,e,x=0,y=0,z=0;
  cin>>d;
  while(d--)
  {
     cin>>a>>b;
     long long z=0,x=0,y=0,c=0;
     x = max(a,b);
     y = min(a,b);
     if(x==y)
     {
         cout<<0<<endl;
         continue;

     }
     else
     {
         if(x%y!=0)
         {
             cout<<-1<<endl;
             continue;

         }
         else
         {
             c = x/y;
             while(c>1)
             {
                 if(c%8==0)
                 {
                     c/=8;
                     z++;
                 }
                 else if(c%4==0)
                 {
                     c/=4;
                     z++;
                 }
                 else if(c%2==0)
                 {
                     c/=2;
                     z++;
                 }
                 else
                 {
                     z=-1;
                     break;
                 }
             }
         }
         cout<<z<<endl;
     }

  }

}
