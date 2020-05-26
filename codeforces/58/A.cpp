#include <bits/stdc++.h>
using namespace std;

 int main()
{
   int x,y=0,z=0;
   string a,b;
   b = "hello";
   cin>>a;
   x = a.length();
   for(int i=0;i<x;i++)
   {
       if(a[i]==b[y])
       {
           y++;
           z++;
           if(z==5)
           {
               break;
           }
       }
   }
   if(z==5)
   {
       cout<<"YES";
   }
   else
    cout<<"NO";

}

