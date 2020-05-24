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
    int a,b=1,c;
    string str1;
    cin>>str1;
    a = str1.length();
     for(int i=1; i<a ; i++)
    {

        if(str1[i]==str1[i-1])
        {
            b++;
            if(b==7)
            {
                break;
            }
            else
                continue;

        }
        else
        {
            b=1;

        }
    }
    if(b==7)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";

}

