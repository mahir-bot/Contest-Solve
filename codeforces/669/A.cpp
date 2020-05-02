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
   long long int x,y,z,i,j,k=0,n,a=0,b=0,c=0;
    cin>>n;

    if(n%3==0)
    {
        cout<<2*n/3;
    }
    else
    cout<< 2*(n-n%3)/3+1;
}
