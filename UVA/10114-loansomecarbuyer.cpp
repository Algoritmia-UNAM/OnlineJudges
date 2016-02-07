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
#include <list>
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

int meses, cambios, mes_actual, regs;
vector<double> depreciacion;

double valor_inicial, deuda, pago, pago_ini, dep_mensual, valor;

void solve()
{
	depreciacion.assign(meses, -1.0);

	REP(i, regs)
	{
		scanf("%d %lf", &mes_actual, &dep_mensual);
		depreciacion[mes_actual] = dep_mensual;
	}


	deuda = valor_inicial ;
	valor  = valor_inicial + pago_ini;

	pago = deuda / meses;


	REP(i, meses+1)
	{
		if(depreciacion[i] < 0.0)
		{
			depreciacion[i]	= dep_mensual;
		}
		
		dep_mensual = depreciacion[i];

		valor -= (valor * dep_mensual);

		if(i > 0)
			deuda = (deuda - pago < 0) ? 0 : deuda - pago;

		//DEBUG(i);
		//DEBUG(dep_mensual);

		//DEBUG(valor);
		//printf("valor: %.5lf ", valor);
		//DEBUGLN(deuda);

		if(valor> deuda)
		{
			if(i == 1)
				printf("1 month\n");
			else
				printf("%d months\n", i);

			return;
		}

		//if(i == 0) dep_mensual = 0.0;

	}


	//printf("valor: %.5lf ", valor);
	//printf("deuda: %.5lf ", deuda);
}

int main()
{
	while(scanf("%d %lf %lf %d", &meses, &pago_ini	, &valor_inicial, &regs) == 4
		  and meses >= 0)
	{
		solve();
	}

	return 0;
}