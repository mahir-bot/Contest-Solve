#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int aa;
        cin >> aa;
        vector<long long> v(aa);
        for (auto &k : v)
        {
            cin >> k;
        }
        long long ansss = 0;

        for (int i = 0; i < aa; i++)
        {
            for (int j = 32 - 1; j >= 0; j--)
            {
                if (v[i] & (1 << j))
                {
                    ansss |= (1 << j);
                }
            }
        }
        cout << ansss << endl;
    }
}