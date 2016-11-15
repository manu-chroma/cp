#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    string s;
    getline(cin,s);
    bool a[26] = {0};

    for (int i = 0; i < s.length(); i++) {
        int index;
        if(s[i] != ' ' ) {
            index = (int)(s[i]-'A');
            if(index <= 25 && index >= 0) {
                a[(int)(s[i]-'A')] = 1;
            }

            else {
                index = (int)(s[i]-'a');
                a[index] = 1;
            }

        } 
    }
    
    for (int i = 0 ; i < 26 ; i++) {
        if(a[i] != 1) {
            cout << "not pangram" ;
            return 0;
        }
    }
    
    cout << "pangram";
    return 0;
}