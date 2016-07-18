///find all the pairs of different types
///cout them
#include<bits/stdc++.h>
using namespace std;
unsigned long long int ar[300007];
unsigned long long int yo[300007];
int main() {
    long long int n;
    cin >> n;
    for(int i=1; i <=n ; i++) {
        scanf("%lld", &ar[i]);
    }
    sort(ar+1,ar+n+1);
    //for printing
    /*for(int i=1; i <=n ; i++) {
        printf("%lld", ar[i]);
    } */
    unsigned long long int num = 0;
    for(long long int i = 1, j = 2; j <= n; ) {

        while(ar[i] == ar[j]) {
            j++;
        }
        printf("value of ar[j] is %lld \n",ar[j] );
            if(ar[i] == ar[j-1]) {
                num++;
                i = j;
                j++;
            }

       else if (ar[i] != ar[j]) {
            i++;
            j++;

        }
}
    if(num== 0) {
        printf("%d",-1);
    }
    else
        printf("%lld", num);
return 0;
}


