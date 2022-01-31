#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned ll
#define pb push_back
#define nl endl

vector<string> vvv;

int main()
{

    for (int i = 1; i < 143; i++)
    {
        int nn = 7 * i;
        vvv.pb(to_string(nn));
    }

    int aa;
    cin >> aa;
    while (aa--)
    {
        string s;
        cin >> s;

        int ss = s.size();

        string anss = s;
        int max = 0;

        for (int i = 0; i < 143; i++)
        {
            if (vvv[i].size() > ss)
                break;
            if (vvv[i].size() < ss)
                continue;

            string temp = vvv[i];
            int cnttt = 0;
            for (int j = 0; j < ss; j++)
            {
                if (temp[j] == s[j])
                {
                    cnttt++;
                }
            }
            if (cnttt > max)
            {
                max = cnttt;
                anss = temp;
            }
        }

        cout << anss << nl;
    }
}