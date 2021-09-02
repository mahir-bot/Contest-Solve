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
#define MX 10000008
#define mx 2000056
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define MEM(a, x) memset(a, x, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define vii vector<int>
#define vll vector<ll>
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

const int INF = INT_MAX;
int fx[] = {+1, -1, +0, +0};
int fy[] = {+0, +0, +1, -1};

// freopen("data.txt", "r", stdin);
// freopen("dataOut.txt", "w", stdout);
///cout<<"Case "<<z++<<": "<<__<<endl;

typedef bool (*comp)(pii, pii);
map<int, bool> marked;
vector<ll> primes;
void sieve()
{
    marked[0] = marked[1] = true;
    primes.pb(2);
    for (int i = 3; i * i <= 100; i += 2)
    {
        for (int j = i * i; j <= 100; j += i * 2)
        {
            marked[j] = true;
        }
    }
    for (int k = 3; k <= 100; k += 2)
    {
        if (!marked[k])
        {
            primes.pb(k);
        }
    }
}

int main()
{
    sieve();
    int x;
    cin >> x;
    while (x--)
    {
        int a;
        cin >> a;
        map<char, int> m;

        string s, fin;
        cin >> s;
        for (int i = 0; i < a; i++)
        {
            m[s[i]]++;
        }
        if (m['1'] || m['4'] || m['6'] || m['8'] || m['9'])
        {
            cout << 1 << endl;
            if (m['1'])
                cout << 1 << endl;
            else if (m['4'])
                cout << 4 << endl;
            else if (m['6'])
                cout << 6 << endl;
            else if (m['8'])
                cout << 8 << endl;
            else if (m['9'])
                cout << 9 << endl;
            continue;
        }
        for (int i = 1; i <= 100; i++)
        {
            if (binary_search(primes.begin(), primes.end(), i))
            {
                continue;
            }
            string ss = to_string(i);
            int a = s.size();
            int b = ss.size();
            int arr[a + 1][b + 1];
            for (int i = 0; i <= a; i++)
            {
                for (int j = 0; j <= b; j++)
                {
                    if (i == 0 || j == 0)
                    {
                        arr[i][j] = 0;
                    }

                    else if (s[i - 1] == ss[j - 1])
                    {
                        arr[i][j] = 1 + arr[i - 1][j - 1];
                    }
                    else
                    {
                        arr[i][j] = max(arr[i][j - 1], arr[i - 1][j]);
                    }
                }
            }
            if (arr[a][b] != ss.size())
            {
                continue;
            }

            bool ans = true;
            map<char, int> cm;
            string match = "";
            cm = m;
            for (int i = 0; i < ss.size(); i++)
            {
                if (cm[ss[i]])
                {
                    match += ss[i];
                    cm[ss[i]]--;
                    continue;
                }
                else
                {
                    ans = false;
                    break;
                }
            }
            if (ans && match == ss)
            {
                fin = ss;
                break;
            }
        }
        if (fin.size() == 0)
        {
            if (m['1'])
            {
                cout << 1 << endl
                     << 1 << endl;
            }
        }
        else
        {
            cout << fin.size() << endl
                 << fin << endl;
        }
    }
}
