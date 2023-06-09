#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
	std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	cin >> n;
	int l=1,r=n;
	while(l<r)
	{
		int mid=l+r>>1;
		cout << "? " << mid << endl;
		int t;
		cin >> t;
		if(!t) l=mid+1;
		else r=mid;
	}
	cout << "! " << l-1 << endl;
	return 0;
}