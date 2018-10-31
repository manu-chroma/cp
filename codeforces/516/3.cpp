#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    
    string s;
    cin >> s;

    int count[26] = {0};

    for(char a: s) {
        count[a - 'a']++;
    }

    for(int i = 0; i < 26; i++) {

        for(int j = 0; j < count[i]; j++) {
            cout << char(i + 'a');
        }

    }

    cout << "\n";
    
    return 0;
}