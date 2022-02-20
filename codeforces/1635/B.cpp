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
        v.push_back(0);
        for (int i = 1; i < aa - 1; i++)
        {
            if (v[i] > v[i - 1] and v[i] > v[i + 1])
            {
                ansss++;
                v[i + 1] = max(v[i], v[i + 2]);
            }
        }
        cout << ansss << endl;
        for (int i = 0; i < aa; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}