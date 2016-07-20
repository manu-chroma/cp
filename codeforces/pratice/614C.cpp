#include <bits/stdc++.h>
using namespace std;
const double pi = 3.14159265358979323846;

typedef long long int li;

li x, y;
long double find_distance(li a, li b) {
	return sqrt(pow((a-x), 2) + pow((y-b), 2));
}

long double FindDistanceToSegment(long double x1, long double y1, long double x2, long double y2, long double pointX, long double pointY)
{
    long double diffX = x2 - x1;
    long double diffY = y2 - y1;
    if ((diffX == 0) && (diffY == 0))
    {
        diffX = pointX - x1;
        diffY = pointY - y1;
        return sqrt(diffX * diffX + diffY * diffY);
    }

    long double t = ((pointX - x1) * diffX + (pointY - y1) * diffY) / (diffX * diffX + diffY * diffY);

    if (t < 0)
    {
        //point is nearest to the first point i.e x1 and y1
        diffX = pointX - x1;
        diffY = pointY - y1;
    }
    else if (t > 1)
    {
        //point is nearest to the end point i.e x2 and y2
        diffX = pointX - x2;
        diffY = pointY - y2;
    }
    else
    {
        //if perpendicular line intersect the line segment.
        diffX = pointX - (x1 + t * diffX);
        diffY = pointY - (y1 + t * diffY);
    }

    //returning shortest distance
    return sqrt(diffX * diffX + diffY * diffY);
}
