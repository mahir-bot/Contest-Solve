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
    ll x;
    cin >> x;
    while (x--)
    {
        ll y;
        cin >> y;
        ll z = 4 * y;
        ll arr[z];
        for (ll i = 0; i < z; i++)
        {
            cin >> arr[i];
        }
        bool ans = true;
        sort(arr, arr + z);
        vll v;
        ll jj = z - 1;
        ll fir = arr[0] * arr[jj];
        if (arr[1] != arr[0] || arr[jj] != arr[jj - 1])
        {
            ans = false;
        }

        for (ll i = 2; i < z; i += 2)
        {
            jj = jj - 2;
            ll val = arr[i] * arr[jj];
            if (fir != val || arr[i + 1] != arr[i] || arr[jj] != arr[jj - 1])
            {
                ans = false;
            }
        }
        if (ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
