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
#define vul vector<ull>
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
#define djt priority_queue<pll, vlp, greater<pll>>
#define pb push_back
#define mp mate_pair
#define nl endl
#define SP(x, y) fixed << setprecision((x)) << (y)
#define mod 1000000007
const ll INF = LLONG_MAX;

int fx[] = {0, 1, 0, -1};
int fy[] = {-1, 0, 1, 0};
int tr[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int tc[] = {-1, 1, -2, 2, -2, 2, -1, 1};
//#ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
//#endif
/// cout<<"Case "<<z++<<": "<<__<<endl;

// typedef bool (*comp)(pii, pii);

//******************************** Template ***********************
template <class T>
inline T bitOn(T n, T pos) { return n | ((T)1 << pos); }
template <class T>
inline T bitOff(T n, T pos) { return n & ~((T)1 << pos); }
template <class T>
inline T isOn(T n, T pos) { return (bool)(n & ((T)1 << pos)); }

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
6 14
?011?11?1?110?1????1
     */
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    int aa = count(all(s), '0');
    int bb = count(all(s), '1');
   // cout << aa << " " << bb << nl;
    a -= aa;
    b -= bb;
    int sz = s.size();
    bool ok = true;
    int cnt = 0;
    for (int i = 0, j = sz - 1; i <= j; i++, j--)
    {
        if (i == j)
        {
           // cout << cnt << nl;
            if (cnt)
                for (int p = 0, q = sz - 1; p < q; p++, q--)
                {
                    if (cnt == 0)
                        break;
                    if (s[p] == s[q] and s[p] == '?')
                    {
                        if (a > 1)
                        {
                            s[p] = '0';
                            s[q] = '0';
                            cnt--;
                            a -= 2;
                        }
                        else if (b > 1)
                        {
                            s[p] = '1';
                            s[q] = '1';
                            cnt--;
                            b -= 2;
                        }
                        else
                        {
                            ok = false;
                            break;
                        }
                    }
                }

            if (s[i] == '?')
            {
                if (a and b)
                {
                    ok = false;
                    break;
                }
                if (a)
                {
                    s[i] = '0';
                    a--;
                }
                else if (b)
                {
                    s[i] = '1';
                    b--;
                }
                else
                {
                    ok = false;
                    break;
                }
            }
            else if (s[i] == '0')
            {
                if (a or b)
                {
                    ok = false;
                    break;
                }
            }
            else if (s[i] == '1')
            {
                if (a or b)
                {
                    ok = false;
                    break;
                }
            }
        }
        if (s[i] == s[j] and s[i] != '?')
        {
            //cout << s[i] << " " << s[j] << nl;
            continue;
        }
        if (s[i] == '1' and s[j] == '?')
        {
            if (b)
            {
                s[j] = '1';
                b--;
            }
            else
            {
                ok = false;
                break;
            }
        }
        else if (s[i] == '0' and s[j] == '?')
        {
            if (a)
            {
                s[j] = '0';
                a--;
            }
            else
            {
                ok = false;
                break;
            }
        }
        else if (s[i] == '?' and s[j] == '1')
        {
            if (b)
            {
                s[i] = '1';
                b--;
            }
            else
            {
                ok = false;
                break;
            }
        }
        else if (s[i] == '?' and s[j] == '0')
        {
            if (a)
            {
                s[i] = '0';
                a--;
            }
            else
            {
                ok = false;
                break;
            }
        }
        else if (s[i] == '?' and s[j] == '?')
        {
            cnt++;
        }
        else if (s[i] == '1' and s[j] == '0' or s[i] == '0' and s[j] == '1')
        {
            ok = false;
            break;
        }
    }

    if(sz%2==0)
    {
        if (cnt)
            for (int p = 0, q = sz - 1; p < q; p++, q--)
            {
                if (cnt == 0)
                    break;
                if (s[p] == s[q] and s[p] == '?')
                {
                    if (a > 1)
                    {
                        s[p] = '0';
                        s[q] = '0';
                        cnt--;
                        a -= 2;
                    }
                    else if (b > 1)
                    {
                        s[p] = '1';
                        s[q] = '1';
                        cnt--;
                        b -= 2;
                    }
                    else
                    {
                        ok = false;
                        break;
                    }
                }
            }
    }
    if (ok)
    {
        if (a or b)
        {
            cout << -1 << nl;
            return;
        }
        cout << s << nl;
    }
    else
    {
        cout << -1 << nl;
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
