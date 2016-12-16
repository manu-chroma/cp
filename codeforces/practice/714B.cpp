#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector <int> input;
    
    if(n < 3) {
        cout << "YES \n";
        return 0;
    }
    
    for(int i=0; i < n; i++) {
        int temp;
        cin >> temp;
        input.push_back(temp);
    }

    sort(input.begin(), input.end());
    auto it = unique(input.begin(), input.end());
    int new_size = it - input.begin();

    if((new_size < 3) || (new_size == 3 && input[0] + input[2] == 2*input[1]))
            cout << "YES \n";
        else 
            cout << "NO \n";
    
return 0;
}