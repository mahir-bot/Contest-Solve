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
      char a[101];
      int b[3] = {5,7,5};
      bool x(true);
      for(int i=0;i<3;++i)
      {
          cin.getline(a,sizeof(a)/sizeof(a[0]));
          int n=0;
          for(int j = 0;a[j]!=0;++j)
          {
              if (a[j] == 'a' || a[j] == 'e' || a[j] == 'i' || a[j] == 'o' || a[j] == 'u')
            {
                n += 1;
            }
          }
          if(n!=b[i])
          {
              x=false;
          }
      }
      cout<<(x ? "YES" : "NO");

}

