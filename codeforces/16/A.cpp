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
      long long a,b,d=0,e;
      char c[101][101];

     cin>>a>>b;

           for(int i=0;i<a;i++)
      {
          for(int j=0;j<b;j++)
          {
              cin>>c[i][j];
          }
      }


      for(int i=1;i<a;i++)
      {
          for(int j=0;j<b;j++)
          {
              if(c[i][j]==c[i-1][j])
              {
                  d=1;
                  break;
              }
          }
      }
      for(int i=0;i<a;i++)
      {
          for(int j=1;j<b;j++)
          {
              if(c[i][j]!=c[i][j-1])
              {
                  d=1;
                  break;
              }
          }
      }
      if(d==1)
      {
          cout<<"NO";
      }
      else
        cout<<"YES";
}
