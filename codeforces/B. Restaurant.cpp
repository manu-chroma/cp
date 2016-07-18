///http://codeforces.com/contest/597/problem/B
#include<bits/stdc++.h>
using namespace std;
pair<long long int,long long int> ar[500000];

/*bool pairCompare (const pair<long long int,long long int> &firstelem,const pair<long long int,long long int> &secondelem) {
  return firstelem.first < secondelem.first;

} */

int main() {
    long long int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        cin >> ar[i].first >> ar[i].second;
    }
    int ans=0;

    sort(&ar[0],&ar[n-1]);

    /*for(int  i=0 ; i<n ; i++) {
        cout << ar[i].first << " " << ar[i].second << endl;     } */
    long long int last = -1, first = -1;
    for(int i = 0 ; i < n ; i++) {
        if(ar[i].first > last) {
            ans++;
            last = ar[i].second;
            //first = ar[i].first;
        }
    }

    cout << ans << endl;

}
