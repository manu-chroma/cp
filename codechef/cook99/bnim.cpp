#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    string p1;
    cin >> n >> p1;
    int ones = 0, zeros = 0;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        // count for dee
        // if (s[0] == '0')
        // {
        //     zeros += count(s.begin(), s.end(), '0');
        // }
        // else
        // {
        //     ones += count(s.begin(), s.end(), '1');
        // }
        bool f = s[0] == s.back();
        if(s[0] == '0') {
            zeros += f;
        }
        else ones += f;
    }

    bool winner = 1;
    if (p1 == "Dum")
    {
        if (ones <= zeros)
            winner ^= 1;
    }
    else
    {
        if (ones < zeros)
            winner ^= 1;
    }

    cout << (winner ? "Dum" : "Dee");
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}