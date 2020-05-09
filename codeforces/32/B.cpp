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
  string a,b;
  cin>>a;
  for(int i=0;i<a.length();i++)
 {
     if(a[i]=='.')
     {
         b+='0';

     }
     if(a[i]=='-' && a[i+1]=='.')
     {
         b+='1';
         ++i;
     }
     if(a[i]=='-' && a[i+1]=='-')
     {
         b+='2';
         ++i;
     }

}
 cout<<b;
}
