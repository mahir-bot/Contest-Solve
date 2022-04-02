#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
using namespace __gnu_cxx;
using namespace std;
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define ull unsigned ll
#define EPS 1e-12
#define MV 1e18
#define MX 100000009
#define mx 2000056
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define mem(a, x) memset(a, x, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define vii vector<int>
#define vll vector<ll>
#define vuu vector<ull>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pip pair<int, pii>
#define pul pair<ull, ull>
#define mii map<int, int>
#define mll map<ll, ll>
#define qii queue<int>
#define dii deque<int>
#define vip vector<pair<int, int>>
#define vlp vector<pair<ll, ll>>
#define djk priority_queue<pll, vlp, greater<pll>>
#define pb push_back
#define mp make_pair
#define nl endl
#define SP(x, y) fixed << setprecision((x)) << (y)
#define mod 1000000007
const ll INF = LLONG_MAX;

int fx[] = {0, 1, 0, -1};
int fy[] = {-1, 0, 1, 0};
int kr[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int kc[] = {-1, 1, -2, 2, -2, 2, -1, 1};
//#ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
//#endif
/// cout<<"Case "<<z++<<": "<<__<<endl;

typedef bool (*comp)(pii, pii);

//******************************** Template ***********************
template <class T>
istream &operator>>(istream &is, vector<T> &input)
{
    for (T &in : input)
        is >> in;
    return is;
}
//******************************** Template ***********************

//******************************** Function ***********************
ull toDecimal(string bin)
{
    unsigned long deci = std::bitset<16>(bin).to_ulong(); // binary string to decimal
    return deci;
}
string toBinary(ll decimal)
{
    std::string binary = std::bitset<16>(decimal).to_string(); // to binary
    return binary;
}
// bool is(int x, int y)
// {
//     if (x >= 0 && y >= 0 && vis[x][y] == false) // out of box or not
//         return true;
//     return false;
// }
///////////////////////////////////////////////////////////////////////////
//////////////////// DO NOT TOUCH BEFORE THIS LINE ////////////////////////
///////////////////////////////////////////////////////////////////////////

int z = 1;

void solve()
{
    /*

     */

    int a;
    cin >> a;
    vii v;
    int arr[a + 5];

    int minus = 0;
    for (int i = 1; i <= a; i++)
    {
        cin >> arr[i];
        if (arr[i] < 0)
            minus++;
        if (arr[i] == 0)
            v.pb(i);
    }

    int x = 0, y = 0;

    if (v.size() == 0)
    {
        if (minus % 2 == 0)
        {
            cout << 0 << " " << 0 << nl;
            return;
        }
        int first = 0, last = 0;
        for (int i = 1; i <= a; i++)
        {
            if (arr[i] < 0)
            {
                first = i;
                break;
            }
        }
        for (int i = a; i >= 1; i--)
        {
            if (arr[i] < 0)
            {
                last = i;
                break;
            }
        }

        int sumOfFirst = 0, sumOfLast = 0;
        for (int i = first + 1; i <= a; i++)
        {
            if (abs(arr[i]) == 2)
                sumOfFirst++;
        }
        for (int i = 1; i < last; i++)
        {
            if (abs(arr[i]) == 2)
                sumOfLast++;
        }

        if (sumOfFirst >= sumOfLast)
        {
            cout << first << " " << 0 << nl;
            return;
        }
        else
        {
            cout << 0 << " " << (a - last) + 1 << nl;
            return;
        }
    }
    else
    {
        // For zero's

        int prev = 1;
        vector<pair<int, pii>> vp;
        v.pb(a + 1);
        for (int i = 0; i < v.size(); i++)
        {

            int now = v[i] - 1;
            int neg = 0;
            int ok = 0;
            int left = 0, right = 0, cnt = 0;
            for (int j = prev; j <= now; j++)
            {
                if (arr[j] < 0)
                {
                    neg++;
                    if (ok == 0)
                    {
                        ok = 1;
                        left = j;
                    }
                    right = j;
                }
                if (arr[j] == 2 or arr[j] == -2)
                {
                    cnt++;
                }
            }

            if (neg % 2 == 0)
            {
                vp.pb({cnt, {prev - 1, a - now}});
            }
            else
            {
                int sumOfFirst = 0, sumOfLast = 0;
                for (int j = left + 1; j <= now; j++)
                {
                    if (abs(arr[j]) == 2)
                        sumOfFirst++;
                }
                for (int j = prev; j < right; j++)
                {
                    if (abs(arr[j]) == 2)
                        sumOfLast++;
                }

                if (sumOfFirst >= sumOfLast)
                {
                    vp.pb({sumOfFirst, {left, a - now}});
                }
                else
                {
                    vp.pb({sumOfLast, {prev - 1, (a - right + 1)}});
                }
            }

            prev = v[i] + 1;
        }

        sort(all(vp));

        cout << vp.back().second.first << " " << vp.back().second.second << nl;
    }
}

int main()
{
    FIO;
    int t;
    cin >> t;
    while (t--)
        solve();
}