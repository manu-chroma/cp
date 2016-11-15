# Notes for the language:

### Fast I/O in C++ 
- ``` ios:sync_with_stdio(false);``` as first line of the ```main()```
- ``` "\n" ``` for ```newline``` instead of ```endl```


### Sorting
- ```sort()``` fn takes pointer to the array or vector with arguements ```[first,last)```
Thus, for an array of ```size 5```, use ```sort(0,5)```


### Presicion for decimal
- For data types ```float, double & long double``` use the following: 
```c++ 
double a= 1.234567654;
cout.precision(10);
cout << fixed << a << "\n";
```

### My Template
``` c++ 
#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
```

### Using ```#define``` and ```typedef```
- ```typedef long long int lli;```

### String Manipulation
- Convert to lower case  ``` transform(s1.begin(), s1.end(), s1.begin(), ::tolower);```
- Convert string to int : use ``` stoi(string s) ```
- Convert c-string to int : use ``` atoi(char s[]) ```
- Convert string to C-style string : use ``` string s = "hello" ; s.c_str(); ```


### Iterators for STL

Iterating over a container in general
```
for (auto it = begin (vector); it != end (vector); ++it) {
    it->doSomething ();
}
```

#### Using String container


## Clarity

Difference between set, map and multiset

map is key->value pair.
set is just the key. 
duplicates are not possible. 

multiset allows duplicates as well.

unrordered map: hash tables  
ordered map: balanced BST

# using vectors to implement graph

For me, the easiest and shortest way is to use a vector and range for loops from C++11.
Declaration of adjacency list:
```
vector<int> E[MAX_NODES];
Add directed edge u->v:
E[u].push_back(v);
Process edges of node v:
for(int u : E[v])
{
    ...
}
more in ``vector_graph.cpp`` file.
If edges also have a weight/capacity associated with them, you'd declare a ``pair<int,int>`` vector instead.
```