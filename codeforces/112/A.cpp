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
    int a,b,c;
    string str1,str2;
    cin>>str1>>str2;
    a = str1.length();
     for(int i=0; i<a ; i++)
    {

        if(str1[i]>='a' && str1[i]<='z')
        {
            str1[i] = str1[i] - 32;
        }
    }
    for(int i=0; i<a ; i++)
    {

        if(str2[i]>='a' && str2[i]<='z')
        {
            str2[i] = str2[i] - 32;
        }
    }
    if(str1==str2)
    {
        cout<<0;
    }
    else if(str1<str2)
    {
        cout<<-1;
    }
     else if(str1>str2)
    {
        cout<<1;
    }

}

