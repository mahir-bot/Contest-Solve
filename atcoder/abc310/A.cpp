#include <bits/stdc++.h>
using namespace std;
#define nl '\n'


int main()
{
	int a, b, c;
	cin >> a >> b >> c;


	int x = (int)1e9;
	int k;
	for (int i = 0; i < a; i++)
	{
		cin >> k;
		x = min(x, k);
	}

	cout << min(x + c, b) << nl;

}