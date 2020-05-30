#include <bits/stdc++.h>
using namespace std;

int main()
{
  string a;
  cin>>a;
  int c;
  c = a.find('.');
  if(a[c-1]=='9')
    cout<<"GOTO Vasilisa.";
    else
    {
        if(a[c+1]>='5')
           {
               a[c-1]++;
           }
        cout<<a.substr(0,c);
    }
}

