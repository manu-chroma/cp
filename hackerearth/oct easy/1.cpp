/*input
3 2
surbhi 3
surpanakha 3
shreya 5
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    vector < pair<int, string> > yo, copy;
    int n, t;
    cin >> n >> t;

    for (int i = 0 ; i < n ; i++) {
    	string s;
    	int q;
    	cin >> s >> q;
    	yo.push_back(make_pair(q,s));
    }

    sort(yo.begin(), yo.end());
    for (int i = 0; i < t; )
    {
        int same_q = yo[n-i-1].first, pointer = i;
        while(same_q == yo[n-i-2].first)
            pointer--;
        while(pointer <= i) {
    	   cout << yo[n-pointer-1].second << "\n";
            i--;
           pointer++;
        }

    }
    return 0;
}
