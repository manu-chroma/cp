#include<bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int count;
        cin >> count;
        if(count == 3)
            {cout << 2 << endl;
            continue;}
        else if(count == 2)
            {cout << 1 << endl;
            continue;}
        else if (count == 0)
            {cout << 0 << endl;
            continue;}
        else if (count == 1)
          {cout << 1<< endl;
            continue;}
        else count -= 1;
        if(count%2 == 0) {
            count = count/2;
            cout << count << endl;
        }
        else {
            count/= 2;
            count++;
            cout << count << endl;}
    }
}
