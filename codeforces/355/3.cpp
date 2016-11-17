#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

unsigned binary_to_decimal(unsigned num)
{
    unsigned res = 0;

    for(int i = 0; num > 0; ++i)
    {
        if((num % 10) == 1)
            res += (1 << i);

        num /= 10;
    }

    return res;
}

int main(int argc, char const *argv[])
{
	
	return 0;
}
