#include<bits/stdc++.h>
using namespace std;
bool check(long long int  a) {
    if(a%5 == 0)
        return 0;
    if(a%3 == 0)
        return 0;

    if(a % 2 != 0 )
        return 0;
    else if(a == 2)
        return 1;
    check(a/2);
}
int main() {
    int tc;
    cin >>tc;
    //
    /*long long int i, num;
    while(num < pow(10,9)) {
        num *= 2;
        i++;
    }
    cout << i << endl;
    */


    while(tc--) {
        long long int num,sum=0;
        cin >> num;
        while(num > 1) {
            if(num%2 == 0) {
                if(check(num))
                sum -= num;
                else sum +=num;
                num--;
            }
            else {
                sum+= num;
                num--;
            }

        }
        cout << sum-1 << endl;
    }
}
