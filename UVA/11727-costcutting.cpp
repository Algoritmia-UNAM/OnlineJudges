#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

#define FOR(i, a, b) for (int i = int(a); i < int(b); i++)
#define REP(i, a) for (int i = 0; i < int(a); i++)
#define INF 1000000000
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<bool> vb;

int main()
{
    vi v(3);
    int n;

    scanf("%d", &n);

    REP(i, n)
    {
        scanf("%d %d %d", &v[0], &v[1], &v[2]);
        sort(v.begin(), v.end());
        printf("Case %d: %d\n", i+1, v[1]);
    }

    return 0;
}
