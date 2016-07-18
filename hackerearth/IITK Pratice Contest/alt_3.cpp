#include <bits/stdc++.h>
#define pb push_back

using namespace std;
typedef long long int li;
const li maxn=100001; 
li r[maxn];
li apa[maxn];

struct El{
    int a,b; // nodes
    int w; // edges
    El(li u, int v, int c){
        a = u;
        b = v;
        w = c;
    }

    bool operator<(El other) const
    {
        return w < other.w;
    }


};

li find(int x){
    if(apa[x]==x){
        return apa[x];
    } else {
        apa[x]=find(apa[x]);
        return apa[x];
    }
}

void unio(li x, int y){
    li xroot=find(x);
    li yroot=find(y);

    if(r[xroot]>r[yroot]) apa[yroot]=xroot;
    else if(r[yroot]>r[xroot]) apa[xroot]=yroot;
    else{
        r[xroot]++;
        apa[yroot]=xroot;
    }
}



vector<El> elek;
int main(void){ios_base::sync_with_stdio(false);

    elek.clear();
    for(li i=0;i<maxn;++i) {apa[i]=i;r[i]=0;}
        li n,m;cin>>n>>m;

    for(li i=0;i<m;++i){
        li c;
        li a,b;cin>>a>>b>>c;
        elek.pb(El(a,b,c));
    }

    sort(elek.begin(),elek.end());//, comp);
    li i=0;
    li bent=0, ans = 0;
    while(bent!=n-1){
        li a = elek[i].a;
        li b = elek[i].b;
        li c = elek[i].w;

        
        if(find(a)!=find(b)){
            unio(a,b);
            ans += c;
            bent++;
        }
        ++i;
    }
    cout << ans;

    return 0;
}