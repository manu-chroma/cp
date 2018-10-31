#include <bits/stdc++.h>
using namespace std;

#define MAX 35

int prime[MAX + 5];

void SieveOfEratosthenes() 
{ 
    for (int i = 2; i * i <= MAX; ++i) 
    { 
        if (!prime[i]) 
            for (int j = i * 2; j <= MAX; j += i) 
                prime[j] = i; 
    } 
  
    // Prime number will have same divisor 
    for (int i = 1; i < MAX; ++i) 
        if (!prime[i]) 
            prime[i] = i; 
} 

int main() {
    ios_base::sync_with_stdio(false);

    SieveOfEratosthenes();

    for(int i = 0; i < MAX; i++) {
        cout << "val: " << i << " smallest: " << prime[i] << "\n"; 
    }


    return 0;
}

