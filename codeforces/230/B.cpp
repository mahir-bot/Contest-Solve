#include <bits/stdc++.h>
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define mx 1000000 + 10
#define vii vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vip vector<pair<int, int>>
#define vlp vector<pair<ll, ll>>
#define pb push_back
#define mp make_pair
#define ull unsigned ll
using namespace std;
int arr[mx];
void sieve()
{
    for (int i = 0; i < mx; i++)
    {
        arr[i] = 1;
    }
    arr[1] = 0;
    for (int i = 2; i <= sqrt(mx); i += 1)
    {
        if (arr[i] == 1)
        {
            for (int j = i * i; j < mx; j += i)
            {
                arr[j] = 0;
            }
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
        ll a;
        cin >> a;
        ll sum = sqrt(a);
        if (sum * sum == a)
        {
            if (arr[sum] == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
