#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int nn, mmm;
        int a, b;
        cin >> nn >> mmm;
        vector<pair<int, int>> v;
        vector<int> vv;
        map<int, int> mm;
        for (int i = 0; i < mmm; i++)
        {
            
            cin >> a >> b;
            mm[a] = i + 1;

            v.push_back({b, a});
        }
        sort(v.begin(), v.end());
        int ans = 0;
        for (int i = 0; i < 2 * nn; i++)
        {
            int a = v[i].second;
            ans += v[i].first;
            vv.push_back(a);
        }

        sort(vv.begin(), vv.end());
        cout << ans << endl;

        for (int i = 0, j = (2 * nn) - 1; i < j; i++, j--)
        {
            cout << mm[vv[i]] << " " << mm[vv[j]] << endl;
        }
    }
}