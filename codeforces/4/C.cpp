#include <bits/stdc++.h>
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define mx 2000005
#define vii vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vip vector<pair<int, int>>
#define vlp vector<pair<ll, ll>>
#define pb push_back
#define mp make_pair
using namespace std;

int main()
{
    map<string, int> m;
    map<string, int>::iterator it;
    int x;
    cin >> x;
    while (x--)
    {
        string s;
        cin >> s;
        it = m.find(s);
        if (it != m.end())
        {
            m[s]++;
            string ss = s;
            ss += to_string(m[s]);
            cout << ss << endl;
        }
        else
        {
            m.insert(pair<string, int>(s, 0));
            cout << "OK" << endl;
        }
    }
}
