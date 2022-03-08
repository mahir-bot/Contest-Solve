#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string ss;
        cin >> ss;
        char aa;
        cin >> aa;
        bool ok = false;
        for (int i = 0; i < ss.size(); i++)
        {
            if ((i + 1) % 2 and ss[i] == aa)
            {
                ok = true;
                break;
            }
        }
        if (ok)
            cout << "yes" << endl;
        else
            cout << "No" << endl;
    }
}