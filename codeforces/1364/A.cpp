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
        int y,z,a=0,val=-1,val2=-1,k=0;
        cin>>y>>z;
        int v[y];
        for(int i=0; i<y; i++)
        {
            cin>>v[i];
            a+=v[i];
        }
        if(a%z)
        {
            cout<<y<<endl;
        }
        else
        {
            for(int j=0; j<y; j++)
            {
                if(v[j]%z!=0)
                {
                    val=y-j-1;
                    break;
                }
            }
            for(int i=y-1; i>=0; i--)
            {
                if(v[i]%z!=0)
                {
                    val2=i;
                    break;
                }
            }
            k = max(val,val2);
            if(k==-1)
            {
                cout<<-1<<endl;
            }
            else
            {
                cout<<k<<endl;
            }
        }
    }
}
