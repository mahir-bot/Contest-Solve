#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x=0,y=0,z=6,arr[1001];
    while(z--)
    {
        cin>>arr[y];
        x+=arr[y];
        y++;
    }
    if(x%2!=0)
    {
        cout<<"NO";
        return 0;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = i+1; j < 6; j++)
        {
            for (int k = j+1; k < 6; k++)
            {
                if (arr[i]+arr[j]+arr[k] == x/2)
                {
                    cout << "YES";
                    return 0;
                }

            }
        }
    }

    cout<<"NO";
}
