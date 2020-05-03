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
    string a,b,c;
    cin>>a>>b>>c;
    reverse(c.begin(), c.end());
    if(a==c && b[0]==b[2])
    {
        cout<<"YES";
    }
    else
        cout<<"NO";

}
