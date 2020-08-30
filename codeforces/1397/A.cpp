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
ll arr[mx+5];
int main()
{
    int x;
    cin>>x;
    while(x--)
    {
        int y,z,flag=0;
        string zz;
        cin>>y;
        z=y;
        while(y--)
        {
            string a;
            cin>>a;
            zz+=a;
        }
        sort(zz.begin(),zz.end());
        int tr=0;
        for(int i=0;i<zz.size();i++)
        {
            if(zz[i]==zz[i+1])
            {
                tr++;
            }
            else
            {
                if((tr+1)%z!=0)
                {
                    flag=1;
                    break;
                }
                else
                {
                    tr=0;
                    continue;
                }
            }
        }
        if(flag==0)
        {
            cout<<"YES"<<endl;
        }
        else if(flag==1)
            cout<<"NO"<<endl;

    }
}
