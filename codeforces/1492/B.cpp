#include <bits/stdc++.h>
//#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define mx 2000
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define vii vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mii map<int, int>
#define mll map<ll, ll>
#define vip vector<pair<int, int>>
#define vlp vector<pair<ll, ll>>
#define pb push_back
#define mp make_pair
using namespace std;
///cout<<"Case "<<z++<<": "<<__<<endl;
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int y;
        cin >> y;
        vii v(y);
        vii val(y + 1);
        vii fin;
        for (int &k : v)
        {
            cin >> k;
        }

        for (int i = 0; i < y; i++)
        {
            val[v[i]] = i;
        }

        for (int i = y; i > 0; i--)
        {
            if (val[i] >= v.size())
            {
                continue;
            }
            fin.insert(fin.end(), v.begin() + val[i], v.end());
            v.erase(v.begin() + val[i], v.end());
        }
        for (int g : fin)
        {
            cout << g << " ";
        }
        cout << endl;
    }
}