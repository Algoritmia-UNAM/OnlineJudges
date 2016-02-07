#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i = int(a); i < int(b); i++)
#define REP(i, a) for (int i = 0; i < int(a); i++)
#define INF 1000000000
#define ALL(x) x.begin(), x.end()
#define X first
#define Y second
#define EPS 1e-9
#define DEBUG(x) cout << #x << ": " << x << " "
#define DEBUGLN(x) cout << #x << ": " << x << " \n"
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<bool> vb;
typedef vector<vi> vvi;
//ios::sync_with_stdio(0);//fast entrada/salida ;-)


int main()
{
	int T;
	ios::sync_with_stdio(0);//fast entrada/salida ;-)
	cin >> T;
	REP(k, T)
	{
		int maxi = -1;
		int n;
		cin>>n;
		int m;
		REP(i, n)
		{
			cin >> m;

			maxi = max(maxi, m);
		}

		cout << "Case " << k+1<<": " << maxi<<'\n';

	}

	return 0;
}