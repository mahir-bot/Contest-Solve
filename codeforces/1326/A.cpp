#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n == 1)
        {
            cout << -1 << "\n";
            continue;
        }
        cout << 2;
        while (--n)
            cout << 3;
        cout << "\n";
    }

}
