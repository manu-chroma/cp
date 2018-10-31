#include <bits/stdc++.h>

using namespace std;


int main() {

    ios_base::sync_with_stdio(false);

    int nos_of_breaks, len_of_day, gap;
    cin >> nos_of_breaks >> len_of_day >> gap;

    set<int> break_times;
    vector<int> cry_vec;
    unordered_map<int, int> idx_mapping;

    for(size_t i = 0; i < nos_of_breaks; i++)
    {
        int tmp;
        cin >> tmp;
        cry_vec.push_back(tmp);
        idx_mapping[i] = tmp;
        break_times.insert(tmp); // sorted my default
    }

    unordered_map<int, int> real_ans;
    vector<vector<int>> ans;

    ans.push_back(vector<int>());
    int days = 1;

    // building day by day
    while(1) {

        // add new vector for the given day
        ans.push_back(vector<int>());

        // add the first vec in the map
        auto val = break_times.begin();

        // all elements put
        if(val == break_times.end()) {
            break;
        } else {
            ans[days].push_back(*val);
            real_ans[*val] = days;

            break_times.erase(val);
        }

    
        do {
            int num = ans[days][ans[days].size() - 1];
            num += (gap + 1);
            auto it = break_times.lower_bound(num);
            
            
            if(it != break_times.end()) {
                ans[days].push_back(*it);
                real_ans[*it] = days;
            } else {
                break; // move to next day
            }

            // remove from set
            break_times.erase(it);

        } while (1);

        // end of day
        days++;
    }

    // cout << "DONE\n";

    days -= 1;
    cout << days << "\n";

    for(size_t i = 0; i < nos_of_breaks; i++)
    {
        cout << real_ans[idx_mapping[i]] << " ";
    }

    cout << "\n";
    
    return 0;
}