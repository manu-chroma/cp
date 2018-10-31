#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    unordered_map<int, int> idx_map;
    vector<int> nos;
        
    for(size_t i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        nos.push_back(tmp);
        idx_map[tmp] = i; // mapping between val and it's index
    }

    unordered_map<int, bool> winner;
 
    // i represents the value here
    for(int curr = n; curr >= 1; curr--) {
        // pick the biggest nos

        bool found = false;
        
        // go right
        for(int j = idx_map[curr]; j < n; j += curr) {
            if(nos[j] > curr) {
                if(winner[nos[j]] == false) {
                    winner[curr] = true;
                    found = true;
                    break;
                }
            }
        }

        for(int j = idx_map[curr]; j >= 0; j -= curr) {
            if(nos[j] > curr) {
                if(winner[nos[j]] == false) {
                    winner[curr] = true;
                    found = true;
                    break;
                }
            }
        }

        if(!found) {
            winner[curr] = false;
        }
    }

    for(auto num: nos) {
        if(winner[num] == true) {
            cout << "A";
        } else {
            cout << "B";
        }
    }

    cout << "\n";

    return 0;
}