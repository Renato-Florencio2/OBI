#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef pair<int, ii> edge;
vector<edge> grafo, grafosub;

vector<int> uf;
int finduf(int x){
    return (uf[x] == x) ? x : (uf[x] = finduf(uf[x]));
}
void unionuf(int n1, int n2){
    int x = finduf(n1), y = finduf(n2);
    if(x == y) return;

    uf[x] = y;
}

int kruskal(){
    int total = 0;

    for(auto i:grafo){
        int x = finduf(i.second.first), y = finduf(i.second.second);
        if(x != y){
            unionuf(x, y);
            total+=i.first;
        }
    }
    for(auto i:grafosub){
        int x = finduf(i.second.first), y = finduf(i.second.second);
        if(x != y){
            unionuf(x, y);
            total+=i.first;
        }
    }
    return total;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int cidades, ferr, rodo;
    cin>>cidades>>ferr>>rodo;
    
    for(int i = 0 ; i <= cidades ; i++) uf.push_back(i);

    while(ferr--){
        int c1, c2, custo;
        cin>>c1>>c2>>custo;
        grafo.push_back({custo, {c1, c2}});
    }
    while(rodo--){
        int c1, c2, custo;
        cin>>c1>>c2>>custo;
        grafosub.push_back({custo, {c1, c2}});
    }
    
    sort(grafo.begin(), grafo.end());
    sort(grafosub.begin(), grafosub.end());
    int total = kruskal();
    cout<<total<<"\n";

    return 0;
}
