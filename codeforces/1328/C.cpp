#include<bits/stdc++.h>
#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  pi    acos(-1.0)
#define  ll    long long
#define  EPS   1e-12
#define  mx    2000005
#define  vii   vector<int>
#define  vll   vector<ll>
#define  pb    push_back
using namespace std;

int main()
{
    ll x;
    cin>>x;
    while(x--)
    {
        ll y;
        cin>>y;
        string a,b(y,'0');
        cin>>a;
        for(int i=0; i<y; i++)
        {

            if(a[i]-'0'==2)
            {
                a[i] = '1';
                b[i] = '1';
            }
            else if(a[i]-'0'==1)
            {
                a[i] = '0';
                b[i] = '1';
                break;
            }
        }

        cout<<b<<endl<<a<<endl;
    }
}



