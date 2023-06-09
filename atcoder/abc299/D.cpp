#include <bits/stdc++.h>

using namespace std;



void solve()
{
    /*
    */


    int x;
    cin>>x;


    int left = 1,right = x;


    while (left<right)
    {
        int mid = (left+right)/2;

        cout<<"? "<<mid<<endl;
        int a;
        cin>>a;
        if (a==0)
        {
            left = mid+1;
        }
        else
        {
            right = mid;
        }
    }

    cout<<"! "<<left-1<<endl;





}






signed main()
{

    std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);

    // int t;
    // cin>>t;
    // while (t--)
    solve();




}