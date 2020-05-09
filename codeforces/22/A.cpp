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
  int x,z,y[101],i,j,k=0;
  cin>>x;
  for(i=0;i<x;i++)
  {
      cin>>y[i];
  }
  sort(y,y+x);
  for(int i=1;i<x;i++)
  {
      if(y[i]>y[i-1])
      {
          z=i;
          k=1;
          break;
      }
  }
  if(k==1)
  {
      cout<<y[z];
  }
  else cout<<"NO";
}
