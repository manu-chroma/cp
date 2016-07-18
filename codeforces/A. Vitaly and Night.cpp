#include<bits/stdc++.h>
using namespace std;
//int ar[1000][1000];
int main() {
  int n,m,ans=0;
  bool a,b;
  cin >> n >> m;
  for(int i = 0 ; i < n*m ; i++) {
        cin>>a>>b;
        if(a == 1|| b == 1)
            ans++;
  }
  cout << ans << endl;
}
