#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<pair<int, int>> queen_attack;
    int q1, q2;
    cin >> q1 >> q2;

    int b1, b2, c1, c2;
    cin >> b1 >> b2 >> c1 >> c2;
    
    // add row
    for(int i = 1; i <= n; i++) {
        queen_attack.push_back(make_pair(i, q2));
        queen_attack.push_back(make_pair(q1, i)); 
    }
    
    vector<pair<int, int>> kings;

    // go horizontal
    if(c1 >= b1) {
        for(int i = b1; i < c1; i++) {
            kings.push_back(make_pair(i, b2));
        }
    } else {
        for(int i = b1; i > c1; i--) {
            kings.push_back(make_pair(i, b2));
        }
    }

    if(c2 >= b2) {
        for(int i = b2; i < c2; i++) {
            kings.push_back(make_pair(b1,i));
        }
    } else {
        for(int i = b2; i > c2; i--) {
            kings.push_back(make_pair(b1, i));
        }
    }

    for(auto inking: kings) {
        for(auto inqueen: queen_attack) {
            if(inking == inqueen) {   
                cout << "NO\n";
                return 0;
            }
        }
    }

    cout << "YES\n";

    return 0;
}