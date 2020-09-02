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
            vii v,r;
            int y,z,a=0,flag=1;
            cin>>y;
            for(int i=0;i<y;i++)
            {
                cin>>z;
                v.pb(z);
            }
            sort(v.begin(),v.end());
            for(int i=1;i<1024;i++)
            {
                for(int j=0;j<y;j++)
                {
                    a=i^v[j];
                    r.pb(a);
                }
                sort(r.begin(),r.end());
                if(v==r)
                {
                    cout<<i<<endl;
                    flag=0;
                    break;
                }
                else
                {
                    r.clear();
                }
            }
            if(flag==1)
            {
                cout<<-1<<endl;
            }
        }
}
