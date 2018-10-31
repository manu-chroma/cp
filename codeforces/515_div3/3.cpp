#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    unordered_map<int, int> idx_to_val;
    int q;
    cin >> q;

    int left = -1, right = 0;

    for (int i = 0; i < q; i++)
    {
        char l;
        cin >> l;

        int val;
        cin >> val;

        if (l == 'L')
        {
            int curr = left;
            idx_to_val[val] = curr;
            left--;
        }
        else if (l == 'R')
        {
            int curr = right;
            idx_to_val[val] = curr;
            right++;
        }
        else if (l == '?')
        {
            int ans = idx_to_val[val];
            cout << min(right - ans - 1, ans - left - 1) << "\n";
        }
    }

    return 0;
}