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
        int y;
        cin>>y;
        vii v(y);
        unordered_map <int,int> mp;
        for(auto &it:v)
        {
            cin>>it;
        }

        int box=INT_MAX;

        for(int i=0; i<y; i++)
        {
            if(mp[v[i]]!=0)
            {
                box=min(box,i-mp[v[i]]+2);

            }
            mp[v[i]]=i+1;
        }

        if(box==INT_MAX)
        {
            cout<<-1<<endl;
        }
        else
            cout<<box<<endl;

    }


}



