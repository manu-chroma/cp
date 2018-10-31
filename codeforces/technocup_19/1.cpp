#include <bits/stdc++.h>

using namespace std;


int main() {

    ios_base::sync_with_stdio(false);


    int n;
    cin >> n;
    
    bool ishard = false;
    for(size_t i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        if(tmp == 1) {
            ishard = true;
        }
    }

    if(ishard) {
        cout << "HARD\n";
    } else {
        cout << "EASY\n";
    }
    
    return 0;
}