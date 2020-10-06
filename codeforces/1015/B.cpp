#include<bits/stdc++.h>
#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  pi    acos(-1.0)
#define  ll    long long
#define  EPS   1e-12
#define  mx    2000005
#define  vii   vector<int>
#define  vll   vector<ll>
#define  pii   pair<int,int>
#define  pll   pair<ll,ll>
#define  vip   vector<pair<int,int>>
#define  vlp   vector<pair<ll,ll>>
#define  pb    push_back
#define  mp    make_pair
using namespace std;
bool cmp(string &a,string &b)
{
    return a.size()<b.size();
}

int main()
{
    int x;
    cin>>x;
    string a,b,c,d;
    cin>>a>>b;

    vii v;
    for(int i=0; i<x; i++)
    {
        if(a[i]!=b[i])
        {
            int cnt=-1;
            for(int j=i+1; j<x; j++)
            {
                if(a[j]==b[i])
                {
                    cnt=j;
                    break;
                }
            }
            if(cnt==-1)
            {
                cout<<-1;
                return 0;
            }
            for(int k=cnt-1; k>=i; k--)
            {
                swap(a[k],a[k+1]);
                v.pb(k);
            }


        }


    }
    cout<<v.size()<<endl;

    for(auto p:v)
    {
        cout<<p+1<<" ";
    }
}
