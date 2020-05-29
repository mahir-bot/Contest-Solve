#include <bits/stdc++.h>
using namespace std;

int main()
{
   int x,y,z,a;
   cin>>x;
   if(x<=10)
   {
       cout<<0;
   }
   else if(x>10 && x<20)
   {
       cout<<4;
   }
   else if(x==20)
   {
       cout<<15;
   }
   else if(x==21)
   {
       cout<<4;
   }
   else if(x>21 && x<26)
   {
       cout<<0;
   }
}

