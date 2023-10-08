#include <bits/stdc++.h>
using namespace std;
// #pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

// using u128 = __int128;
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define int ll
#define EPS 0.00000001
#define mod 998244353
const int mx = 1e5 + 300;
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
#define nl endl
#define SP(x, y) fixed << setprecision((x)) << (y)
#define inf 0x3F3F3F3F
#define ff first
#define ss second
#define sz(s) s.size()




int fx[] = {0, 1, 0, -1};
int fy[] = { -1, 0, 1, 0};



template <class T>
inline T bitOn(T n, T pos)
{
    return n | ((T)1 << pos);
}
template <class T>
inline T bitOff(T n, T pos)
{
    return n & ~((T)1 << pos);
}
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

template <class T>
istream &operator>>(istream &is, vector<pair<T, T>> &input)
{
    for (auto &[i, n] : input)
    {
        is >> i >> n;
    }
    return is;
}
template <typename T>
ostream &operator<<(ostream &os, const vector<T> &vec)
{
    for (auto &a : vec)
        cout << a << " ";
    return os;
}
ostream &operator<<(ostream &os, const vector<pair<int, int>> &vec)
{
    for (auto &a : vec)
        cout << a.ff << " " << a.ss << nl;
    return os;
}



// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// #include <ext/pb_ds/detail/standard_policies.hpp>
// using namespace __gnu_pbds;
// using namespace __gnu_cxx;

// template <typename T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// template <typename T>
// using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// order_of_key(?) : return count of values which is < ?
// find_by_order(?): access the ? index in set
//__builtin_popcount


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



    int a,b;
    cin>>a>>b;

    deque<pii>d;

    priority_queue<pii>pq,q;
    int x[a+1],y[a+1];
    for (int i = 0; i<a; i++)
    {
        cin>>x[i];
    }
    for (int i = 0; i<a; i++)
    {
        cin>>y[i];
    }

    for (int i = 0; i<a; i++)
    {
        pq.push({-y[i],x[i]});
        q.push({-y[i],x[i]});
    }

    while (q.empty()==false)
    {
        pii now = q.top();
        q.pop();
        d.pb(now);
    }


    int cnt = d.front().ss;
    int cost = d.front().ff*-1;
    int ans = b;
    d.pop_front();
    bool ok = true;
    while (d.empty()==false)
    {

        int xx = 0;
        for (int i = 0; i<cnt-1; i++)
        {
            if (b<=cost)
            {
                xx = 1;
                break;
            }

            if (d.empty()==false)
            {
                ans+=cost;
                q.push({d.back()});
                d.pop_back();
            }
            else
            {
                break;
            }

        }


        if (xx==0 and d.empty()==false)
        {
            if ((d.front().ff*(-1))<b)
            {
                ans+=cost;
                cost = d.front().ff*-1;
                cnt = d.front().ss;
                d.pop_front();
            }
            else
            {
                if (b>cost)
                {
                    ans+=cost;
                    d.pop_back();
                }
                else
                {
                    ans+=b;
                    d.pop_back();
                }

                // cout<<ans<<" "<<cnt<<" "<<cost<<nl;
                ans+=(b*d.size());
                break;
            }

        }
        else
        {
            ans+=(b*d.size());
            break;
        }

    }

    cout<<ans<<nl;






}




signed main()
{
    FIO;
    int t;
    cin >> t;
    while (t--)
        solve();
}