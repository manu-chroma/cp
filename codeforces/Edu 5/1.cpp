#include<bits/stdc++.h>
using namespace std;

//char a[1000005];
//char b[1000005];
int main() {
    string a,b;
    cin >> a >>b;
    long long int length;
   if (a.length() > b.length())
     length = b.length() ;
    else
     length = a.length();
    if()
    for(int i = 0; i < length ; i++) {
        if(a[i] > b[i]) {
            cout << ">" << endl;
            return 0;
        }
        else {
            cout << "<" << endl;
            return 0;
        }
    }
    cout << "==" << endl;
}
