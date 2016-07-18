#include <iostream>
#include <bits/stdc++.h>
 
using namespace::std;
 
typedef long long int li;

long long int set_array[1234567];
pair < long long int, pair <long long int, long long int> > mpair;
pair < long long int, pair <long long int, long long int> > graph[1234567];
 
long long int find_set(long long int a){
	if(set_array[a]!=a){
		return find_set(set_array[a]);
	}
	return a;
}
 
void union_set(long long int a,long long int b,long long int n){
 
	long long int x=find_set(a);
	long long int y=find_set(b);
 
	if(x!=y){
		for(long long int i=1;i<=n;i++){
			if(set_array[i]==x){
				set_array[i]=y;
			}
		}
	}
}
 
int main(){
	ios_base::sync_with_stdio(false);
		long long int v,e;
		cin>>v>>e;
		for(long long int i=1;i<=v;i++){
			set_array[i]=i;
		}
		long long int i=1;
		while(e){
			e--;
			long long int a,b,w;
			cin>>a>>b>>w;
			mpair.first=w;
			if(a<b){
				mpair.second.first=a;
				mpair.second.second=b;
			}else{
				mpair.second.first=b;
				mpair.second.second=a;
			}
			graph[i++]=mpair;
		}
		sort(graph+1,graph+i);
		li ans = 0;
		for(long long int j=1;j<=i-1;j++){
			long long int a=graph[j].second.first;
			long long int b=graph[j].second.second;
			long long int w=graph[j].first;
			//cout<<w<<" "<<a<<" "<<b<<endl;
			if(find_set(a)!=find_set(b)){
				union_set(a,b,v);
				ans += w;
			}
		}
		cout << ans ;
	// }
	return 0;
} 