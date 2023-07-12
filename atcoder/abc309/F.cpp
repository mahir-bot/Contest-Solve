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



struct Point {
    int x, y, z;
};

int domination(vector<Point> v) {
    int n = v.size();
    int ans = 0;
    sort(v.begin(), v.end(), [](const Point& a, const Point& b) {
        if (a.x != b.x) return (a.x > b.x);
        if (a.y != b.y) return (a.y < b.y); // this is very important
        return (a.z < b.z);
    });

    auto cond = [&](pair<int, int> a, pair<int, int> b) {
        return (a.first > b.first && a.second > b.second);
    };

    // Maintains a data structure, where x is mapped to
    // the max(y) seen with this x while holding that
    // if x2 > x1 then y2 < y1 for each (x[i], y[i])
    map<int, int> frontier; // { x -> max(y) }
    auto update = [&](Point p) {
        auto it = frontier.find(p.y);
        if (it != frontier.end()) {
            it->second = max(it->second, p.z);
        } else {
            frontier[p.y] = p.z;
            it = frontier.find(p.y);
        }

        while (it != frontier.begin() && prev(it)->second <= it->second) {
            frontier.erase(prev(it));
        }

        if (next(it) != frontier.end() && cond(*next(it), { p.y, p.z })) {
            if (it->second <= p.z) frontier.erase(it);
            return true;
        }
        else {
            return false;
        }
    };

    for (int i = 0; i < n; i++) {
        if (update(v[i])) {
            ans++;
        }
    }
    return ans;
}



void solve()
{
    /*

    */

    int a;
    cin>>a;

    vector<Point>vp;

    for (int i=0; i<a; i++)
    {
        vii v(3);
        cin>>v;
        sort(all(v));
        do {

            vp.pb({v[0],v[1],v[2]});
        } while (next_permutation(all(v)));

    }

    if (domination(vp))
    {
        cout<<"Yes"<<nl;
    }
    else
    {
        cout<<"No"<<nl;
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
