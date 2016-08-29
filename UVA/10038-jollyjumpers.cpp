#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <cctype>
#include <vector>
#include <map>
#include <queue>
#include <cstring>

using namespace std;

#define FOR(i, a, b) for (int i = int(a); i < int(b); ++i)
#define REP(i, a) for (int i = 0; i < int(a); ++i)

#define INF 1000000000

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;

int N;
vi jolly_array;

void solve()
{
	if(N == 1)
	{
		scanf("%d", &N);
		printf("Jolly\n");
		return;
	}

	jolly_array.assign(0, 0);

	int anterior, actual;

	for(int i=0;i <N-1; i++)
	{
		if(i == 0)
			scanf("%d", &anterior);
		scanf("%d", &actual);
		//printf("-- %d %d\n", anterior, actual);
		jolly_array.push_back(abs(anterior-actual));
		anterior = actual;
	}

	sort(jolly_array.begin(), jolly_array.end());

	for(int i=0; i<jolly_array.size(), i++)
	{
		//printf("%d ", jolly_array[i]);
		if(jolly_array[i] != i+1)
		{
			printf("Not jolly\n");
			return;
		}
	}
	printf("Jolly\n");
}

int main()
{
	while(scanf("%d", &N) == 1)
		solve();

	return 0;
}
