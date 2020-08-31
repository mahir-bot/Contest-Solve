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
       int y,flag=0;
       cin>>y;
       int arr[y];
       for(int i=0;i<y;i++)
       {
           cin>>arr[i];
       }
       sort(arr,arr+y);
       for(int i=0;i<y-1;i++)
       {
           if(abs(arr[i]-arr[i+1])>1)
           {
               flag=1;
               break;
           }
           else
           {
               continue;
           }
       }
       if(flag==0)
       {
           cout<<"YES"<<endl;
       }
       else if(flag==1)
       {
           cout<<"NO"<<endl;
       }
   }
}
