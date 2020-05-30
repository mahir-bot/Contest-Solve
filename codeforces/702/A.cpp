#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long b,c=0,d=1,e=0,i=0;
  cin>>b;
   long long a[b];

  for(i=0;i<b;i++)
  {
      cin>>a[i];
  }

  for(i=1;i<b;i++)
  {
      if(a[i]>a[i-1])
      {
          d++;
      }
      else
      {
          if(d>c)
          {
              c=d;
          }
          d=1;
      }
  }
  if(d>c)
  {
      c=d;
  }
  cout<<c;

}

