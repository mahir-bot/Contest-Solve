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
    int gv[10000];
    string s[22],t[22];
    int main()
{
    int x,y,z[101],i=0,j=0,k,l;
    cin>>x>>y;
    l=x;
    while(x--)
    {
        cin>>z[j];
        j++;
    }
    for(k=0;k<l;k++)
    {
        if(z[i]>=z[y-1] && z[i]!=0)
        {
            i++;
        }
        else
            continue;
    }
    cout<<i;

}

