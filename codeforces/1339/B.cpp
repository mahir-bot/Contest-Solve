#include <bits/stdc++.h>
#define vii vector<int>
#define pb push_back
using namespace std;
int main()
{
    int x;
    cin>>x;
    while(x--)
    {
        vii v,z;
        int y,t,p=1;
        cin>>y;
        for(int i=0; i<y; i++)
        {
            cin>>t;
            v.pb(t);
        }
        sort(v.begin(),v.end());

        for(int j=0; j<y; j++)
        {
            z.pb(v[j]);
            z.pb(v[y-p]);
            p++;
        }

        for(int i=y-1; i>=0; i--)
        {
            cout<<z[i]<<" ";
        }
        cout<<endl;
    }
}
