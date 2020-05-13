    #include <bits/stdc++.h>
    #include <iostream>
    #include <string.h>
    #include <cstdlib>
    #include <cstring>
    #include <algorithm>
    #include <cctype>
    #include <cmath>
    #include <math.h>
    using namespace std;
    int gv[10000],n;
    string s[22],t[22];
    int main()
{
     int x,y,z,i,j,k,a,b,c;
     cin>>x;
     while(x--)
     {
         cin>>a>>b>>c;
         if(c*10>=a)
         {
             a-=c*10;
         }
         else
         {
              while(b!=0)
         {
             a/=2;
             a+=10;
             b--;
         }
         a-=c*10;
         }

         if(a<=0)
         {
             cout<<"YES"<<endl;
         }
         else
            cout<<"NO"<<endl;
     }
}

