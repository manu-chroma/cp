#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main() {
	ios_base::sync_with_stdio(false);

	int cost, lucky_coin;
	cin >> cost >> lucky_coin;
	li t_cost = 0;
	for (int i = 1; ; ++i)
	 {
	 	t_cost += cost;
	 	if((t_cost-lucky_coin) % 10 == 0 || t_cost % 10 == 0) {
	 		cout << i << "\n";
	 		return 0;
	 	}
	 } 
	return 0;
}