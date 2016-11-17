#include <bits/stdc++.h>
using namespace std;
const double pi = 3.14159265358979323846;

typedef long long int li;
typedef long double ld;


long double find_distance(li x, li y, li a, li b) {
	return sqrt(pow((a-x), 2) + pow((y-b), 2));
}

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
	ios_base::sync_with_stdio(false); 

	li n,x,y ;
	cin >> n >> x >> y;
	vector < pair<li, li> >co ;
	for (int i = 0; i < n; ++i)
	{
		li temp1, temp2;
		cin >> temp1 >> temp2;
		co.push_back(make_pair(temp1,temp2));
	}

	vector <long double> dis;
	for (int i = 0; i < n; ++i)
	{
		dis.push_back(find_distance(x, y, co[i].first, co[i].second));
	}

	long double R = *max_element(dis.begin(), dis.end());
	long double r = *min_element(dis.begin(), dis.end());
	
	// checking if there exsists more than one smaller points. 
	vector < li > points;
	for (int i = 0; i < n; ++i)
	{
		if(dis[i] == r) {
			points.push_back(i);
		}
	}	
	
	for (int i = 0; i < points.size(); ++i)
	{
		ld new_dis = pDistance(x,y,co[points[0]].first, co[points[0]].second, co[points[1]].first, co[points[1]].second);
		if(new_dis > pDistance(x,y,co[points[0]].first, co[points[0]].second, co[points[1]].first, co[points[1]].second))
			new_dis 
	}
	// r = (new_dis < r ) ? new_dis : r ;
	long double ans = pi*(pow(R,2)-pow(r,2));
	
	cout.precision(18); 
	cout << ans;

	return 0;
}