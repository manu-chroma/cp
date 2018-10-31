#include <bits/stdc++.h>
using namespace std;

const int maxi = 2002;
int grid_left[maxi][maxi];
int grid_right[maxi][maxi];

int canmove[maxi][maxi];

// 0: invalid
// 1: valid, seeing for the first time
// 2: valid, updated grid_left and grid_right

int row, col;

int solve(int x, int y) {

    if(x < 0 || x >= row || y < 0 || y >= col) {
        return 0;
    }

    if(canmove[x][y] == 0) {
        return 0;
    } else if(canmove[x][y] == 2) { // seen already
        return 0;
    }

    canmove[x][y] = 2;
    ans++;

    int ans[4];
    ans[0] = solve(x, y-1);
    ans[1] = solve(x, y+1);
     
    // mutate state of what I am calling from here
    grid_left[x-1][y]--;
    grid_left[x+1][y]--;

    if(grid_left[x][y] >= 0) {
        grid_left[x-1][y] = grid_left[x+1][y];p
        ans[2] = solve(x-1, y);
    }


    // explore up first
    return  + solve(x-1, y) + solve(x+1, y);
} 

int main() {
    ios_base::sync_with_stdio(false);

    cin >> row >> col;

    int s1, s2;
    cin >> s1 >> s2;

    int left, right;
    cin >> left >> right;

    
    for(int i = 0; i < row; i++)
    {
        string s; cin >> s;
        for(int j = 0; j < col; j++)
        {
            if(s[j] == '.') {
                canmove[i][j] = 1;
            } else {
                canmove[i][j] = 0;
            }
        }
    }

    grid_left[s1][s2] = left;
    grid_right[s1][s2] = right;
    canmove[s1][s2] = 2;
    int ans = 1;

    solve(s1, s2);
    
    cout << ans << "\n";

    return 0;
}