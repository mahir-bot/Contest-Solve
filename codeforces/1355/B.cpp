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
    int x;
    cin>>x;
    while(x--)
    {
        vii v;
        int y,a=0,b=0,z;
        cin>>y;
        for(int i=0; i<y; i++)
        {
            cin>>z;
            v.pb(z);
        }
        sort(v.begin(),v.end());
        for(int i=0; i<y; i++)
        {
            if(++a==v[i])
            {
                b++;
                a=0;
            }
        }
        cout<<b<<endl;
    }
}
