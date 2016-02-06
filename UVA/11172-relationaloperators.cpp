#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>

using namespace std;

typedef long long ll;

int main()
{
	int casos;

	cin >> casos;

	ll a, b;

	for (int i = 0; i < casos; ++i)
	{
		scanf("%Ld %Ld", &a, &b);

		if(a > b)
			printf(">\n");
		else if( a < b)
			printf("<\n");
		else
			printf("=\n");
	}
}