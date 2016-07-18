#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;
typedef long long int li;

struct Edge
{
	int s, d, w;
};

const int E_MAX = 100001;
const int V_MAX = 100001;

int V, E;

Edge eg[E_MAX + 1];
bool EM[E_MAX + 1];

bool EComp(const Edge& l, const Edge& r)
{
	return l.w < r.w;
}

int GetParent(int nds[], int n)
{
	int p = n;

	while( p != nds[p]) p = nds[p];

	return p;

}

void Kruskal()
{
	int nds[V_MAX + 1] = {0};

	for(int i = 1; i <= V; ++i)
	{
		nds[i] = i;
	}

	int cnt = 0;

	for(int i = 0; i < E && cnt < V-1; ++i)
	{
		int p1 = GetParent(nds, eg[i].s);
		int p2 = GetParent(nds, eg[i].d);

		if( p1 == p2 ) continue;

		EM[i] = true;

		++cnt;

		if(cnt == V-1) break;

		nds[p2] = p1;
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	cin >> V >> E;

	for(int i = 0; i < E; ++i)
	{
		EM[i] = false;
	}

	for(int i = 0; i < E; ++i)
	{
		cin >> eg[i].s >> eg[i].d >> eg[i].w;
	}

	sort(eg, eg + E, EComp);

	Kruskal();

	li ans = 0;
	for(int i = 0; i < E; ++i)
	{
		if(EM[i] == false) continue;

		ans += eg[i].w;
	}

	cout << ans << endl;

	return 0;
}