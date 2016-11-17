#include <stdio.h>
#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <stdlib.h>
#include <math.h>
#include <cstring>
#include <algorithm>
#include <map>
#include <set>
 
using namespace std;
 
#define fi first
#define sc second
#define ff first.first
#define fs first.second
#define sf second.first
#define ss second.second
#define pb push_back
#define mp make_pair
#define ll long long
#define dl double
#define ison(a,b) (a&(1<<b))
#define bitcnt __builtin_popcount
#define MOD 1000000007 
#define INF 1000000000
 
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<iii> wadj;


int main(int argc, char const *argv[])
{
//freopen("inp.txt","r",stdin);
 ll n,h,k;
 cin>>n>>h>>k;
 ll a[100002];
 for(int i=0;i<n;i++)
   cin>>a[i];
   ll ans=0,cap=0;
   int i=0;
   while(i<n)
   {
      while(i<n&&cap<=h)
      {
         cap+=a[i];
         i++;
      }
      if(cap>h)
      {
         i--;
         cap-=a[i];
      }
      //cout<<cap<<" "<<k<<endl;
      if(cap<=k)
      {
       ans++;
       cap=0;
    }
      else
      {
         ans+=cap/k;
         cap=cap%k;
      }
      //cout<<cap<<endl;
      if(i>=n)
         break;
   }
   if(cap)
      ans++;
   cout<<ans;
    return 0;
}