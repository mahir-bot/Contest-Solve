#include <bits/stdc++.h>

using namespace std;
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

// using u128 = __int128;
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define int ll
// #define ull unsigned ll int
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


// const int MAX_N = 2500;
// const int R_CHANGE[] {0, 1, 0, -1};
// const int C_CHANGE[] {1, 0, -1, 0};




void solve()
{
    int a,b;
    cin>>a>>b;
    vector<string>s(a);
    cin>>s;


    vip ans;

    for (int i = 0; i<a; i++)
    {
        for (int j = 0; j<b; j++)
        {
            if (s[i][j]=='#')
            {
                bool ok = true;
                for (int k = i; k<i+3; k++)
                {
                    for (int kk = j; kk<j+3; kk++)
                    {
                        if (k+6>=a || kk+6>=b)
                        {
                            ok = false;
                            break;
                        }
                        if (s[k][kk]=='#' and s[k+6][kk+6]==s[k][kk])
                        {
                            continue;
                        }
                        else
                        {
                            ok = false;
                            break;
                        }
                    }
                    if (ok==false)
                    {
                        break;
                    }
                }

                if (ok)
                {
                    if (j+3<b)
                        if (s[i][j+3]=='.' and s[i+1][j+3]=='.' and s[i+2][j+3]=='.' and
                                s[i+3][j]=='.' and s[i+3][j+1]=='.' and s[i+3][j+2]=='.' and  s[i+3][j+3]=='.' )
                        {
                            if (s[i+6][j+5]=='.' and s[i+7][j+5]=='.' and s[i+8][j+5]=='.' and
                                    s[i+5][j+6]=='.' and s[i+5][j+7]=='.' and s[i+5][j+8]=='.' and  s[i+5][j+5]=='.' )
                            {
                                ans.pb({i+1,j+1});
                            }
                        }
                }
            }
        }
    }
    sort(all(ans));
    for (auto k:ans)
    {
        cout<<k.ff<<" "<<k.ss<<nl;
    }
}



signed main()
{
    FIO;
    // int t;
    // cin>>t;
    // while (t--)
    solve();
}
