//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <utility>
#include <cstdio>
#include <cstring>
#include <ciso646>
#include <set>
#include <algorithm>
#include <map>
#include <iomanip>
#include <string>
using namespace std;

#define FOR(i, a, b) for (int i = int(a); i < int(b); i++)
#define REP(i, a) for (int i = 0; i < int(a); i++)
#define INF 1000000000
#define ALL(x) x.begin(), x.end()
#define MP(a, b) make_pair((a), (b))
#define X first
#define Y second
#define EPS 1e-9
#define DEBUG(x) cout << #x << ": " << x << " "
#define DEBUGLN(x) cout << #x << ": " << x << " \n"
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef long long ll;
typedef vector<bool> vb;
//ios::sync_with_stdio(0);//fast entrada/salida ;-)

int n, b, h, w, p, a;

void solve()
{
	int min_price = INF;
	REP(i, h)
	{
		scanf("%d", &p);
		REP(j, w)
		{
			scanf("%d", &a);
			if(a >= n)
			{
				min_price = min(min_price, n * p);
			}
		}
	}

	if(min_price <= b)
	{
		printf("%d\n", min_price);
	}
	else
	{
		printf("stay home\n");
	}
}

int main()
{	
	while(scanf("%d %d %d %d", &n, &b, &h, &w) == 4)
		solve();
	return 0;
}