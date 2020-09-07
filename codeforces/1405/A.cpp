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
    FIO;
    int x;
    cin>>x;
    while(x--)
    {
        int y;
        cin>>y;
        int arr[y];
        for(int i=0; i<y; i++)
        {
            cin>>arr[i];
        }
        for(int i=y-1;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
