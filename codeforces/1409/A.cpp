#include <bits/stdc++.h>
#define vii vector<int>
#define pb push_back
using namespace std;
int main()
{
    int z;
    cin>>z;
    while(z--)
    {
        long long a,b,c=0,val=0,maxx=0,minn=0,l=0,k=0;
        cin>>a>>b;
        maxx=max(a,b);
        minn=min(a,b);
        c=maxx-minn;
        c/=10;
        l=c*10+minn;
        k=maxx-l;

        if(k>0)
        {
            cout<<c+1<<endl;
        }

        else
            cout<<c<<endl;
    }

}
