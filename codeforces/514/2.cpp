#include <bits/stdc++.h>
using namespace std;

const int MAX = 1001;
int arr[MAX][MAX];

int n, m;

void fill(int x, int y) {

  bool possible = true;

  // traverse 3x3
  for (size_t i = x; i < x + 3; i++) {
    for (size_t j = y; j < y + 3; j++) {
      if (i == x + 1 && j == y + 1)
        continue;

      if (i >= n || j >= m || arr[i][j] == 0) {
        possible = false;
		break;
      }
    }
  }

  if (possible) {

    for (size_t i = x; i < x + 3; i++) {
      for (size_t j = y; j < y + 3; j++) {
        if (i == x + 1 && j == y + 1)
          continue;

		arr[i][j] = 2;
      }
    }
  }

  return;
}

int main() {
  ios_base::sync_with_stdio(false);

  cin >> n >> m;

  // 0: nothing
  // 1: present
  // 2: present, done.
  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < m; j++) {
      char lol;
      cin >> lol;
      if (lol == '#') {
        arr[i][j] = 1;
      } else if (lol == '.') {
        arr[i][j] = 0;
      }
    }
  }

  // traverse all the points which are
  // not marked, and find it there is a
  // possible way to go through them
  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < m; j++) {
      if (arr[i][j] != 0) {
        fill(i, j);
      }
    }
  }

  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < m; j++) {
      if (arr[i][j] == 1) {
        cout << "NO\n";
        return 0;
      }
    }
  }

  cout << "YES\n";

  return 0;
}
