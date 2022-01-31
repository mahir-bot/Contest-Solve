#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned ll

#define nl endl

int main()
{
   
    int aa;
    cin >> aa;
    while (aa--)
    {
        ull hP, hM, dP, dM;
        ull cn, cP, bP;
        cin >> hP >> dP >> hM >> dM >> cn >> cP >> bP;
        ull fdd = dP;
        ull fhh = hP;
        bool oooo = false;
        dP += cn * cP;
        ull wp = cn, sd = 0;
        while (true)
        {
            ll pN = hM / dP;
            ll mN = hP / dM;
            if (pN * dP != hM)
            {
                pN++;
            }

            if (mN * dM != hP)
            {
                mN++;
            }

            if (pN <= mN)
            {
                oooo = true;
                break;
            }
            if (wp <= 0)
            {
                break;
            }
            if (wp > 0)
            {
                sd++;
                wp--;
                dP = fdd + (wp * cP);
                hP = fhh + (sd * bP);
            }
        }

        if (oooo)
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }
}