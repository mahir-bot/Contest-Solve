    #include <iostream>
    #include <string.h>
    #include <cstdlib>
    #include <cstring>
    #include <algorithm>
    #include <cctype>
    #include <cmath>
    using namespace std;
    int gv[10000];
    string s[22],t[22];
    int main()
    {
      int x[101],y[101],z,i,j,k,a,b,c;
      cin>>a>>b>>c;
      for(i=1;i<=b;i++)
      {
          z=0;
          cin>>z;
          x[z]=1;
      }
      for(j=1;j<=c;j++)
      {
          z=0;
          cin>>z;
          x[z]=2;
      }
      for(i=1;i<=a;i++)
      {
          cout<<x[i]<<" ";
      }



    }
