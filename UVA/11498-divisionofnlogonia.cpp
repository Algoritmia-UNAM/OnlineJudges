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

int q;


void solve()
{
    int dx , dy, px, py;

    scanf("%d %d", &dx, &dy);

    REP(i, q)
    {
        scanf("%d %d", &px, &py);
        if(px == dx or py == dy)
            printf("divisa\n");
        else if(px < dx and py < dy)
            printf("SO\n");
        else if(px < dx and py > dy)
            printf("NO\n");
        else if(px > dx and py > dy)
            printf("NE\n");
        else
            printf("SE\n");
    }
}

int main()
{
    while(scanf("%d", &q) == 1 and q)
        solve();
    return 0;
}
