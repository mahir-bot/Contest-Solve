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
   int x,i,j,k,l,w=0;
   string y,z;
   cin>>x;
   cin>>y>>z;
   for(i=0;i<x;i++)
   {
       j = abs(y[i]-z[i]);
       if(j>5)
       {
           k = min(y[i],z[i]) + 10;
           l = max(y[i],z[i]);
           w+= k-l;
       }
       else
        {
           k = min(y[i],z[i]);
           l = max(y[i],z[i]);
           w+= l-k;
        }
   }
   cout<<w;
}

