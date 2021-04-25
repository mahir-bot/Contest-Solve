#include <bits/stdc++.h>
//#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define MV 1e18
#define mx 1000000 + 10
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define vii vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mii map<int, int>
#define mll map<ll, ll>
#define vip vector<pair<int, int>>
#define vlp vector<pair<ll, ll>>
#define pb push_back
#define mp make_pair
#define ull unsigned ll
using namespace std;
/*freopen("data.txt","r",stdin);
	freopen("dataOut.txt","w",stdout);*/
///cout<<"Case "<<z++<<": "<<__<<endl;

int main()
{
	int x;
	cin >> x;
	while (x--)
	{
		int y;
		cin >> y;
		vii v(y + 1);
		set<int> s;
		for (int i = 0; i < y; i++)
		{
			int k;
			cin >> k;
			v[k]++;
			s.insert(k);
		}
		int max_occ = *max_element(v.begin(), v.end());
		int tot_ele = s.size();
		int ans1 = min(max_occ - 1, tot_ele);
		int ans2 = min(max_occ, tot_ele - 1);
		cout << max(ans1, ans2) << endl;
		v.clear();
		s.clear();
	}
}