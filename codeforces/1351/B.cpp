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
     int x,y,z,a,b,c,d,e,f,g;
     cin>>x;
     while(x--)

     {
         cin>>a>>b>>c>>d;
         y= min(a,b);
         z= min(c,d);
         e= max(a,b);
         f= max(c,d);
         g= y+z;
         if(e==f && e==g)
         {
             cout<<"YES"<<endl;
         }
         else
            cout<<"NO"<<endl;
     }

}

