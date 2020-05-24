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
     string a;
     cin>>a;
     int b,k=0,l=0;
     b = a.length();
     for(int j=0;j<b;j++)
     {
         if(a[j]>='A' && a[j]<='Z')
         {
             a[j]=a[j]+32;
         }

     }
     for(int i=0;i<b;i++)
     {

             if(a[i]=='a'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='e'||a[i]=='y')
             {
                 continue;
             }
             else

               {
                   cout<<'.'<<a[i];
               }
     }
}

