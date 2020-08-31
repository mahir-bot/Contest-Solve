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
        vii vec;
        int z=0,a=0,kk=0,zz=0;
        string y;
        cin>>y;
        y+="0";
        for(int i=0; i<y.size(); i++)
        {
            if(y[i]=='0')
            {
                if(z)
                {
                    vec.pb(z);
                    z=0;
                }
            }
            else
            {
                z++;
            }

        }
        sort(vec.rbegin(),vec.rend());
        for(int i=0; i<vec.size(); i+=2)
        {

            kk+=vec[i];
        }
        cout<<kk<<endl;
    }
}
