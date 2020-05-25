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
   int x,y,z,b;
   string a;
   cin>>a;
   b = a.length();
   for(int i=0;i<b-2;i+=2)
   {
       for(int k=0;k<b-i-2;k+=2)
       {
           if(a[k]>a[k+2])
       {
           int temp= a[k];
           a[k] = a[k+2];
           a[k+2] = temp;
       }

       }
   }
   for(int j=0;j<b-1;j+=2)
   {
       cout<<a[j]<<'+';
   }
   cout<<a[b-1];

}

