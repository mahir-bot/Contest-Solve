#include <iostream>
#include <string.h>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cctype>
#include <cmath>
using namespace std;
int gv[10000],n;
string s[22],t[22];
int main()
{
  string x,y;
  cin>>x>>y;
  reverse(x.begin(),x.end());
  if(x==y)
  {
      cout<<"YES";
  }
  else
    cout<<"NO";

}
