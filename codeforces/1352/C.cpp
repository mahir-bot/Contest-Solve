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
        int a,b;
        cin>>a>>b;
        int y=(b-1)/(a-1);
        cout<<b+y<<endl;
    }
}
