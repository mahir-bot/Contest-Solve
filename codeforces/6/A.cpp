#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int a,b,c,d;

    cin>>a>>b>>c>>d;

    if((a+b>c && a+c>b && b+c>a) || (a+b>d && a+d>b && b+d>a) || (a+d>c && a+c>d && c+d>a) || (d+b>c && d+c>b && b+c>d))
       {
           cout<<"TRIANGLE";
           return 0;

       }
    else if((a==b+c || b==a+c || c==a+b) || (a==b+d || b==a+d || d==a+b) || (a==d+c || d==a+c || c==a+d) || (d==b+c || b==d+c || c==d+b))
       {
          cout<<"SEGMENT";
          return 0;

       }
    else
        {
            cout<<"IMPOSSIBLE";
            return 0;
        }

}
