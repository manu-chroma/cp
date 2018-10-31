#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    int dp[n];

    // to write to
    int tmp[n];

    for(size_t i = 0; i < n; i++)
    {
        char tmp;
        cin >> tmp;
        dp[i] = tmp - '0';
    }


    // check breaking into 2
    int start = 0;
    int end = n-1;
    int start_sum = dp[0];
    int end_sum = dp[n-1];

    bool checked = false;

    // divide array into two parts
    while(end - start != 1) {

        if(start_sum < end_sum || checked == true) {
            start++;
            start_sum += dp[start];
            checked = false;
            
        } else if(start_sum > end_sum) {
            end--;
            end_sum += dp[end];
            
        } else if(start_sum == end_sum && checked == false) {
            // check if middle is also equal
            int middle_sum = 0;
            for(int i = start + 1; i < end; i++) {
                middle_sum += dp[i];
            }    

            if(start_sum == middle_sum) {
                cout << "YES\n";
                return 0;
            } 

            checked = true;
        }
    }


    // check all consumed
    if(start_sum == end_sum && (end - start == 1)) {
        cout << "YES\n";
        return 0;
    } else {
        cout << "NO\n";
        return 0;
    }
    
    return 0;
}