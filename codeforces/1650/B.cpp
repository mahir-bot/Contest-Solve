#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        long long a, b, c;
        cin >> a >> b >> c;
        long long ans = 0;
        long long value = b / c;
        long long temporary = value;
        ++temporary;
        temporary = (temporary * c) - 1;
        value = (value * c) - 1;
        if (temporary <= b and temporary >= a)
        {
            ans = (temporary / c) + (temporary % c);
        }
        else if (value < a)
        {
            ans = (b / c) + (b % c);
        }
        else
        {
            ans = (value / c) + (value % c);
        }
        cout << ans << endl;
    }
}