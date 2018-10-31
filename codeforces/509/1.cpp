#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int n;
    cin >> n;

    if(n == 1) {
        cout << 0 << "\n";
        return 0;
    }

    vector<int> arr(n);
    for(size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    auto min = min_element(arr.begin(), arr.end());
    auto max = max_element(arr.begin(), arr.end());


    cout << *max - *min - n + 1 << "\n";
    

    return 0;
}