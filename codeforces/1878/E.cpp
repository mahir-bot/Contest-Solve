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
#define mod 1000000007
const int mx = 3e5 + 300;
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define mem(a, x) memset(a, x, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define vii vector<int>
#define vvl vector<vector<ll>>
#define pii pair<int, int>
#define mii map<int, int>
#define vip vector<pair<int, int>>
#define djk priority_queue<pii, vip, greater<pii>>
#define pb push_back
#define nl '\n'
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
// // using T = ll;
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

int z = 1;

void solve()
{

    /*

    */


    int a;
    cin>>a;
    int v[a+10];
    for (int i = 1; i<=a; i++)
        cin>>v[i];
    int prefix[a+10][40]= {{0}};
    for (int i = 1; i<=a; i++)
    {
        for (int j = 35; j>=0; j--)
        {
            if (isOn(v[i],j))
            {
                prefix[i][j] = prefix[i-1][j]+1;
            }
        }
    }

    vii ans;
    int q;
    cin>>q;
    while (q--)
    {
        int l,val;
        cin>>l>>val;
        if (v[l]<val)
        {
            ans.pb(-1);
            continue;
        }

        int left = l,right = a;

        while (left<=right)
        {
            int mid = (left+right)/2;

            int now = 0;
            for (int i=34; i>=0; i--)
            {
                if (prefix[mid][i]-prefix[l-1][i]==(mid-l+1))
                {
                    now = now|(1<<i);
                }
            }

            if (now>=val)
            {
                left = mid+1;
            }
            else
            {
                right = mid-1;
            }
        }

        ans.pb(right);
    }

    for (auto k:ans)
        cout<<k<<" ";
    cout<<nl;







}





signed main()
{
    FIO;
    int t;
    cin >> t;
    while (t--)
        solve();
}