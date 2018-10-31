#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);


    vector<pair<int, int>> ans;
    ans.push_back(make_pair(0, 1));
    ans.push_back(make_pair(0, 2));
    ans.push_back(make_pair(3, 2));
    ans.push_back(make_pair(0, 3));


    vector<int> final_ans;

    for(int i = 0; i < final_ans.size() - 1; i++) {

        auto pair1 = ans[i];
        auto pair2 = ans[i+1];
            
        int f1, f2, f3;
        f1 = f2 = f3 = -1;
        if(pair1.first == pair2.first) {
            f2 = pair1.first;

            f1 = pair1.second;
            f3 = pair2.second;
        } else if(pair1.first == pair2.second) { 
            f2 = pair1.first;
            
            f1 = pair1.second;
            f3 = pair2.first;
        } else if(pair1.second == pair2.first) {
            f2 = pair1.second;

            f1 = pair1.first;
            f3 = pair2.second;
        } else if(pair1.second == pair2.second) {
            f2 = pair1.second;

            f1 = pair1.first;
            f3 = pair2.first;
        }

        // no common link found between two pairs
        if(f2 == -1) {
            cout << "NO\n";
            return 0;
        }

        if(i == 0) {            
            final_ans.push_back(f1);
            final_ans.push_back(f2);
        } else {
            // check for last two of the previous pair
            int size = final_ans.size();
            if(final_ans[size -1] != f1) {
                // cout << "final: " << final_ans[size-1] << " f1: " << f1 << "\n";
                cout << "NO\n";
                return 0;
            }

            final_ans.push_back(f2);
        }
    }

    
    cout << "YES\n";
    for(auto num: final_ans) {
        cout << num << " ";
    }
    cout << "\n";

    

    return 0;
}