#include <bits/stdc++.h>
using namespace std;

typedef long long int li;
typedef long double ld;

long double pDistance(ld x, ld y, ld x1, ld y1, ld x2, ld y2) {

	long double A = x - x1;
	long double B = y - y1;
	long double C = x2 - x1;
	long double D = y2 - y1;

	long double dot = A * C + B * D;
	long double len_sq = C * C + D * D;
	long double param = -1;
  if (len_sq != 0) //in case of 0 length line
  	param = dot / len_sq;

  long double xx, yy;
  // cout << param << endl;
  if (param < 0) {
  	xx = x1;
  	yy = y1;
    return -1;
  }
  else if (param > 1) {
  	xx = x2;
  	yy = y2;
  }
  else {
  	xx = x1 + param * C;
  	yy = y1 + param * D;
  }

  long double dx = x - xx;
  long double dy = y - yy;

  return sqrt(dx * dx + dy * dy);
}

int main(int argc, char const *argv[])
{
  cout << pDistance(0,0,-1,2,2,2);
  return 0;
}