#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int a;
    cin>>a;
    for(int i=2; i*i<=a; ++i)
    {
        if(a%i==0)
        {
            cout<<i<<a/i<<endl;
            return 0;
        }
    }

    cout<<1<<a<<endl;
}
