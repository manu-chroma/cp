#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main() {
	ios_base::sync_with_stdio(false);

	long n, m, k;
	cin >> n >> m >> k;
	// n: potions to make
	// m: 1st spell
	// k: second type of spells

	long x, s;
	cin >> x >> s;
	// x: time for one potion
	// s: total manapoints

	vector <long> spell_1_time;

	for (int i = 0; i < m; ++i)
	{
		long temp;
		cin >> temp;
		spell_1_time.push_back(temp);
	}

	vector <long> spell_1_cost;

	for (int i = 0; i < m; ++i)
	{
		long temp;
		cin >> temp;
		spell_1_cost.push_back(temp);
	}

	// i/o for 1st spell done

	vector <long> spell_2_cost, spell_2_potions;

	// vector < pair <int, int> > spell_2;

	for (int i = 0; i < k; ++i)
	{
		long temp;
		cin >> temp;
		spell_2_potions.push_back(temp);
	}

	for (int i = 0; i < k; ++i)
	{
		long temp;
		cin >> temp;
		spell_2_cost.push_back(temp);
	}

	// i/o for 2nd done
	li ans = -1;
	li test_ans = -1;

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < k; ++j)
		{
			li cost_to_search = s - spell_1_cost[i];
			auto found_value = lower_bound(spell_2_cost.begin(), spell_2_cost.end(), cost_to_search);

			cout << "cost_to_search: " << cost_to_search << "\n";

			if(*found_value != cost_to_search) {
				--found_value;
			}

			if(found_value != spell_2_cost.end() && cost_to_search > 0 && *found_value == cost_to_search && found_value >= spell_2_cost.begin()) {
				cout << "value of lower_bound: " << *found_value << "\n";
				


				test_ans = ( n-spell_2_potions[ (spell_2_cost[(found_value - spell_2_cost.begin())]) ] ) * spell_1_time[i];	

				if(ans == -1 || ans > test_ans)
					ans = test_ans;
			}
		}
	}

	// only 1st spell
	long reduced_time = -1;
	for (int i = 0; i < m; ++i)
	{
		if(spell_1_cost[i] <= s && reduced_time < spell_1_time[i]) {
			reduced_time = spell_1_time[i]; 
		}
	}

	if(reduced_time != -1) {
		test_ans = n*reduced_time;

		if(ans == -1)
			ans = test_ans;
		else if(ans > test_ans)
			ans = test_ans;
	}


	// only 2nd spell
	long max_no_potions = -1;
	for (int i = 0; i < k; ++i)
	{
		if(spell_2_cost[i] <= s) {
			max_no_potions = spell_2_potions[i];
		}
	}

	if(max_no_potions != -1) {
		test_ans = (n-max_no_potions)*x;

		if(ans == -1 || ans > test_ans)
			ans = test_ans;
	}

	if(ans == -1)
		ans = n*x;

	cout << ans << "\n";
	return 0;
}