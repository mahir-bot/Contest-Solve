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
    int x,y,z,num[101],diff,poss=0,negg=0,a=0,b,j,k;
    cin>>x;
    b=x;
    while(x--)
    {
        cin>>num[a];
        a++;
    }
    for(int i=0;i<b;i++)
    {
        if(num[i]%2==0)
        {
            poss++;
            j=i+1;
        }
        else if(num[i]%2!=0)
        {
            negg++;
            k=i+1;
        }
    }
    if(negg==1)
    {
        cout<<k;
    }
    else if(poss==1)
    {
        cout<<j;
    }

}

