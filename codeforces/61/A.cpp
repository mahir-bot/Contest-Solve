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
   long long  x,y,z,k[101],m=0,n=0,o,p;
   char i[999],j[999];
    cin>>i>>j;
    for(z=0;z<strlen(i);z++)
    {
        if(i[z]!=j[z])
        {
            k[z]=1;
        }
        else
            k[z]=0;
    }
    for(z=0;z<strlen(i);z++)
    {
        cout<<k[z];
    }

}
