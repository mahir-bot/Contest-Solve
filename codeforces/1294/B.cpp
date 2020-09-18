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
        vector<pair<int,int>> vp(y);
        for(int i=0; i<y; i++)
        {
            cin>>vp[i].first>>vp[i].second;
        }
        sort(vp.begin(),vp.end());
        pair<int,int> curr = make_pair(0,0);
        string s;
        bool flag = true;
        for(int i=0; i<y; i++)
        {
            int ri = vp[i].first - curr.first;
            int up = vp[i].second - curr.second;
            if(up<0 || ri<0)
            {
                cout<<"NO"<<endl;
                flag = false;
                break;
            }
            else
            {
                s+=string(ri,'R');
                s+=string(up,'U');
                curr = vp[i];
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl<<s<<endl;
        }
    }
}



