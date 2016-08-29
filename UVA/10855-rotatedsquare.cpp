//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <utility>
#include <cstdio>
#include <cstring>
#include <ciso646>
#include <set>
#include <algorithm>
#include <map>
#include <iomanip>
#include <string>
#include <list>
using namespace std;
//look at my code my code is amazing
#define FOR(i, a, b) for (int i = int(a); i < int(b); i++)
#define REP(i, a) for (int i = 0; i < int(a); i++)
#define INF 1000000000
#define ALL(x) x.begin(), x.end()
#define MP(a, b) make_pair((a), (b))
#define X first
#define Y second
#define EPS 1e-9

#define DEBUG(x) cerr << #x << ": " << x << " "
#define DEBUGLN(x) cerr << #x << ": " << x << " \n"
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef long long ll;
typedef vector<bool> vb;
//ios::sync_with_stdio(0);//fast entrada/salida ;-)

vector<vector<char> > m_a, m_b, tmp;


int N, n;

void print_mat(vector<vector<char> > v)
{
	REP(i, v.size())
	{
		REP(j, v.size())
		{
			cerr << v[i][j] << " ";
		}
		cerr << "\n";
	}
}

void rotate()
{
	if((int)tmp.size() != n )
		tmp.assign(n, vector<char>(n));


	int l = n-1;
	REP(i, n)
	{
		int k = 0;
		REP(j, n)
		{
			//DEBUG(k);
			//DEBUG(l);
			//DEBUG(i);
			//DEBUGLN(j);
			tmp[k][l] = m_b[i][j];

			k++;
		}
		l--;
	}

	m_b = tmp;

}

int coincide()
{
	int cont = 0;

	REP(i, N-n+1)
	{
		REP(j, N-n+1)
		{
			bool concuerda = true;

			int i2 = 0;
			FOR(k, i, i+n)
			{
				if(not concuerda)
					break;
				int j2 = 0;
				FOR(l, j, j+n)
				{
					//DEBUG(m_a[k][l] );
					if(m_a[k][l] != m_b[i2][j2])
					{
						concuerda = false;
						break;
					}
					j2++;
				}
				i2++;
			}

			if(concuerda)
			{
				//DEBUG(i);
				//DEBUGLN(j);
				cont++;
			}
		}
	}

	return cont;
}

void solve()
{
	m_a.assign(N, vector<char>(N));

	REP(i, N)
	{
		REP(j, N)
		{
			cin >> m_a[i][j];
		}
	}

	m_b.assign(n, vector<char>(n));

	REP(i, n)
	{
		REP(j, n)
		{
			cin >> m_b[i][j];
		}
	}

	//print_mat(m_a);
	//print_mat(m_b);

	int pos_1 = coincide();
	rotate();
	//DEBUG(pos_1);
	//print_mat(m_b);
	int pos_2 = coincide();
	rotate();

	//print_mat(m_b);
	int pos_3 = coincide();
	rotate();

	//print_mat(m_b);
	int pos_4 = coincide();

	cout << pos_1 << " " << pos_2 << " " << pos_3 << " " << pos_4 << "\n";

}

int main()
{
	//ios::sync_with_stdio(0);//fast entrada/salida ;-)
	while(cin >> N >> n and N+n )
		solve();

	return 0;
}
