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
        int y;
        cin>>y;
        int arr[y];
        for(int i=0; i<y; i++)
        {
            cin>>arr[i];
        }
        if(arr[0]+arr[1]>arr[y-1])
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<1<<" "<<2<<" "<<y<<endl;
        }
    }
}
