#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
  ll test;
    cin>>test;
    while(test--)
    {
        ll n,m,k;
        cin>>n>>m>>k;
       ll h=n/k;
       ll a=min(m,h);
       ll b=(m - a + k - 2) / (k - 1);
       cout<<(a-b)<<endl;
    }

    return 0;
}
