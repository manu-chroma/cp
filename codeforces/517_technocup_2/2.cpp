#include <bits/stdc++.h>
using namespace std;

struct pair_hash {
    template <class T1, class T2>
    std::size_t operator () (const std::pair<T1,T2> &p) const {
        auto h1 = std::hash<T1>{}(p.first);
        auto h2 = std::hash<T2>{}(p.second);
        
        size_t seed = 2;
        seed ^= h1 + 0x9e3779b9 + (seed << 6) + (seed >> 2);
        seed ^= h2 + 0x9e3779b9 + (seed << 6) + (seed >> 2);
        return seed;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
  
    // mapping between <a (OR), b (AND)> and <i, j> of them
    unordered_map<pair<int, int>, pair<int, int>, pair_hash> calc;
    
    // run this every time
    for(size_t i = 0; i < 4; i++)
    {
        for(size_t j = i; j < 4; j++)
        {
            calc[make_pair(i|j, i&j)] = make_pair(i, j);
            cout << "and: " << (i&j) << " or: " << (i|j) << " i: " << i << " j: " << j << "\n";
        }
    }

    int n;
    cin >> n;
    vector<pair<int, int>> ans;

    // io
    vector<int> a(n-1), b(n-1);
    for(auto &num: a) {
        cin >> num;
    }
    for(auto &num: b) {
        cin >> num;
    }

    for(int i = 0; i < n-1; i++) {
        // look at two at a time
        auto res = calc.find(make_pair(a[i], b[i]));
        // no such pair exists
        if(res == calc.end()) {
            cout << "NO\n";
            return 0;
        }

        auto pair1 = res->second;
        ans.push_back(pair1);
    }

    // ans.push_back(make_pair(0, 1));
    // ans.push_back(make_pair(0, 2));
    // ans.push_back(make_pair(3, 2));
    // ans.push_back(make_pair(0, 3));
    // ans.push_back(make_pair(0, 5));

    vector<int> final_ans;
  
    int common = -1;

    // reduce to ans
    for(int i = 0; i < ans.size() - 1; i++) {

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
            // common link is the first element and write new commn link
            if(final_ans[size - 1] != f1) {
                cout << "final: " << final_ans[size-1] << " f1: " << f1 << "\n";
                cout << "NO\n";
                return 0;
            }

            final_ans.push_back(f2);
        }
        
        // insert last
        if(i == ans.size() - 2) {
            final_ans.push_back(f3);
        }
    }

    if(ans.size() == 1) {
        final_ans.push_back(ans[0].first);
        final_ans.push_back(ans[0].second);
    }
    
    cout << "YES\n";
    for(auto num: final_ans) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}