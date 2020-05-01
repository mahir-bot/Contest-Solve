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
      string a,b,c,d,e,f;
      int x,y,z,i,j,k;
      cin>>a>>b>>c;
       d=a+b;
      x = d.size();
      y = c.size();
      if(x!=y)
      {
          cout<<"NO";
      }
      else
      {
          sort(d.begin(),d.end());
          sort(c.begin(),c.end());
         if(d==c)
         {
             cout<<"YES";
         }
         else
            cout<<"NO";
      }

    }
