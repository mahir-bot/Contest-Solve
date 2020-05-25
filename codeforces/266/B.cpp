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
    int gv[10000];
    string s[22],t[22];
    int main()
{
   int x,y,z,i=0,j=0;
   string a;
   cin>>x>>y;
   cin>>a;
   for(j=0;j<y;j++)
   {
        for(int i=0;i<x-1;i++)
   {
       if(a[i]=='B' && a[i+1]=='G')
       {
           char temp = a[i];
           a[i] = a[i+1];
           a[i+1] = temp;
           i+=1;
       }

   }

   }

   cout<<a;
}

