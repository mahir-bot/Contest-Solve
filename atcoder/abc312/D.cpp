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
// #define int ll
// #define ull unsigned ll int
#define EPS 0.00000001
#define mod 998244353
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
#define inf 0x3F3F3F3F
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
template <typename T>
ostream &operator<<(ostream &os, const vector<T> &vec)
{
    for (auto &a : vec)
        cout << a << " ";
    return os;
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


struct mi {
    int v;
    mi() {
        v=0;
    }
    mi(ll _v) {
        v=int(-mod<=_v&&_v<mod?_v:_v%mod);
        if (v<0)v+=mod;
    }
    explicit operator int()const {
        return v;
    }
    friend bool operator==(const mi &a,const mi &b) {
        return (a.v==b.v);
    }
    friend bool operator!=(const mi &a,const mi &b) {
        return (a.v!=b.v);
    }
    friend bool operator<(const mi &a,const mi &b) {
        return (a.v<b.v);
    }
    mi& operator+=(const mi &m) {
        if ((v+=m.v)>=mod)v-=mod;
        return *this;
    }
    mi& operator-=(const mi &m) {
        if ((v-=m.v)<0)v+=mod;
        return *this;
    }
    mi& operator*=(const mi &m) {
        v=((ll)(v)*m.v)%mod;
        return *this;
    }
    mi& operator/=(const mi &m) {
        return (*this)*=inv(m);
    }
    friend mi pow(mi a,ll e) {
        mi r=1;
        for (; e; a*=a,e/=2)if (e&1)r*=a;
        return r;
    }
    friend mi inv(mi a) {
        return pow(a,mod-2);
    }
    mi operator-()const {
        return mi(-v);
    }
    mi& operator++() {
        return (*this)+=1;
    }
    mi& operator--() {
        return (*this)-=1;
    }
    friend mi operator++(mi &a,int) {
        mi t=a;
        ++a;
        return t;
    }
    friend mi operator--(mi &a,int) {
        mi t=a;
        --a;
        return t;
    }
    friend mi operator+(mi a,const mi &b) {
        return a+=b;
    }
    friend mi operator-(mi a,const mi &b) {
        return a-=b;
    }
    friend mi operator*(mi a,const mi &b) {
        return a*=b;
    }
    friend mi operator/(mi a,const mi &b) {
        return a/=b;
    }
    friend istream& operator>>(istream &is,mi &m) {
        ll _v;
        is >> _v;
        m=mi(_v);
        return is;
    }
    friend ostream& operator<<(ostream &os,const mi &m) {
        os << m.v;
        return os;
    }
};




void solve()
{


    string s;
    cin>>s;
    int n = s.size();
    vector<vector<mi>>dp(n,vector<mi>(n*2+100));

    if (s[0]==')')
    {
        cout<<0<<nl;
        return;
    }

    dp[0][1] = 1;

    for (int i = 1; i<n; i++)
    {
        for (int b = 0; b<=2*n; b++)
        {
            if (b>0 and s[i]=='(')
            {
                dp[i][b] = dp[i-1][b-1];
            }
            else if (s[i]==')')
                dp[i][b] = dp[i-1][b+1];
            else if (s[i]=='?')
            {
                dp[i][b] = (b-1>=0 ? dp[i-1][b-1]:0)+dp[i-1][b+1];
            }

        }
    }

    // for (int i=0; i<n; i++)
    // {
    //     for (int j = 0; j<=n; j++)
    //         cout<<dp[i][j]<<" ";
    //     cout<<nl;
    // }

    cout<<dp[n-1][0]<<nl;

}



signed main()
{
    FIO;
    // int t;
    // cin>>t;
    // while (t--)
    solve();
}
