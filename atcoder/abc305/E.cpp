#include <bits/stdc++.h>

using namespace std;
// using u128 = __int128;
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define int ll
#define ull unsigned ll int
#define EPS 0.00000001
#define mod (int)1e9+7
const int mx = 2e5+30;
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define mem(a, x) memset(a, x, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define vii vector<int>
#define graph vector<vii>
#define pii pair<int, int>
#define mii map<int, int>
#define vip vector<pair<int, int>>
#define djk priority_queue<pii, vip, greater<pii>>
#define pb push_back
#define nl '\n'
#define SP(x, y) fixed << setprecision((x)) << (y)
#define INF 0x3F3F3F3F
#define ff first
#define ss second
#define sz(s) s.size()




int fx[] = {0, 1, 0, -1};
int fy[] = { -1, 0, 1, 0};
// int tr[] = { -2, -2, -1, -1, 1, 1, 2, 2};
// int tc[] = { -1, 1, -2, 2, -2, 2, -1, 1};



// // typedef bool (*comp)(pii, pii);

// //******************************** Template ***********************
// template <class T>
// inline T bitOn(T n, T pos)
// {
//     return n | ((T)1 << pos);
// }
// template <class T>
// inline T bitOff(T n, T pos)
// {
//     return n & ~((T)1 << pos);
// }
template <class T>
inline T isOn(T n, T pos)
{
    return (bool)(n & ((T)1 << pos));
}

template <class T>
istream &operator>>(istream &is, vector<T> &input)
{
    for (T &in : input)
    {
        is >> in;
    }
    return is;
}
// template <class T> inline T bigmod(T p,T e,T M) {
//     ll ret = 1;
//     for (; e > 0; e >>= 1) {
//         if (e & 1) ret = (ret * p) % M;
//         p = (p * p) % M;
//     }
//     return (T)ret;
// }

// template <typename T>
// T Hypot(T x,T y)
// {
//     return hypot(x,y);
// }

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/Tree_policy.hpp>
// #include <ext/pb_ds/detail/standard_policies.hpp>
// using namespace __gnu_pbds;
// using namespace __gnu_cxx;

// template <typename T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// template <typename T>
// using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// // order_of_key(?) : return count of values which is < ?
// // find_by_order(?): access the ? index in set
// //__builtin_popcount

// //******************************** Template ***********************

int z = 1;
void loj()
{
    cout<<"Case "<<z++<<":"<<nl;
}
// void sublime()
// {
// #ifndef ONLINE_JUDGE
//     freopen("inputf.in", "r", stdin);
//     freopen("outputf.out", "w", stdout);
// #endif
// }
///////////////////////////////////////////////////////////////////////////
//////////////////// DO NOT TOUCH BEFORE THIS LINE ////////////////////////
///////////////////////////////////////////////////////////////////////////

//NO FIO IN INTERACTIVE PROBLEM
//PRINT FFLUSH(STDOUT) AND NEW LINE





void solve()
{
    /*

    */


    int n,m,k;
    cin>>n>>m>>k;


    graph v(n);

    for (int i = 0; i<m; i++)
    {
        int x,y;
        cin>>x>>y;
        x--;
        y--;
        v[x].pb(y);
        v[y].pb(x);
    }

    vii post(n);

    for (int i = 0; i<k; i++)
    {
        int x,y;
        cin>>x>>y;
        x--;
        post[x] = y;
    }



    priority_queue<pii>pq;

    for (int i = 0; i<n; i++)
    {
        if (post[i])
        {
            pq.push({post[i],i});
        }
    }

    vector<bool> ans(n,false);

    while (pq.empty()==false)
    {
        auto [x,y] = pq.top();
        pq.pop();
        ans[y] = true;

        for (auto val:v[y])
        {
            if (ans[val])
                continue;
            ans[val] = true;
            if (x>1)
            {
                pq.push({x-1,val});
            }
        }
    }

    vii ok;
    int cnt = 0;
    for (int i = 0; i<n; i++)
    {
        if (ans[i])
        {
            ok.pb(i+1);
            cnt++;
        }

    }
    cout<<cnt<<nl;

    if (cnt)
    {
        for (auto x:ok)
            cout<<x<<" ";
        cout<<nl;
    }




}



signed main()
{
    FIO;
    // int tt;
    // cin>>tt;

    // while (tt--)
    solve();

}
