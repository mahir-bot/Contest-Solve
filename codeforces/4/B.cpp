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
    int x,y;
    cin>>x>>y;

    int a[x],b[x],fir=0,sec=0;
    for(int i=0; i<x; i++)
    {
        cin>>a[i]>>b[i];
        fir+=a[i];
        sec+=b[i];
    }

    if(fir>y || y>sec)
    {
        cout<<"NO";
        return 0;
    }
    cout<<"YES"<<endl;
    for(int i=0;i<x;i++)
    {
        cout<<min(b[i],y-fir+a[i])<<" ";
        y-=min(b[i],y-fir+a[i]);
        fir-=a[i];
    }

}
