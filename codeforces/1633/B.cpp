#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned ll

#define nl endl

int main()
{
   
    int aa;
    cin >> aa;
    while (aa--)
    {
        string ss;
        cin >> ss;
        int one = count(ss.begin(),ss.end(), '1');
        int zero = count(ss.begin(),ss.end(), '0');
        if (one == zero)
        {
            cout << zero - 1 << nl;
            continue;
        } 
         if (zero > one)
        {
            cout << one << nl;
            continue;
        }
        if (one > zero)
        {
            cout << zero << nl;
            continue;
        }
      
    }
}