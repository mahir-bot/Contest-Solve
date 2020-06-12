#include <bits/stdc++.h>

using namespace std;
int main()
{
  int h,w,z=0,x;
  long long value=1000000000;
  cin>>x;
  while(x--)
  {
      cin>>w>>h;
      if(w<=value && h<=value)
      {
          value = max(w,h);
      }
      else if(w<=value && h>value)
      {
          value = w;
      }
      else if(w>value && h<=value)
      {
          value = h;
      }
      else
      {
          z=1;
          break;
      }

  }

   if(z==1)
   {
       cout<<"NO";
   }
   else
    cout<<"YES";
}
