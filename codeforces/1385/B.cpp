#include <bits/stdc++.h>
using namespace std;
int ff[10000];
int main()
{

    map <int,int> m;
    vector <int> vec;
    int x,y,z,a=0;
    cin>>x;
    while(x--)
    {
        cin>>z;

       for(int i=0;i<2*z;i++)
        {
            cin>>y;
            if(m[y]==0)
            {
                cout<<y<<" ";
                m[y]=1;
            }
        }
        cout<<endl;
        m.clear();
    }
}




