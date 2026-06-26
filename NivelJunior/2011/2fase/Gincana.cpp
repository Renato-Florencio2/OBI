// https://olimpiada.ic.unicamp.br/pratique/pj/2011/f2/gincana/

#include <bits/stdc++.h>
using namespace std;

int vertices, arestas;
vector<vector<int>> grafo;
vector<bool> visitado;

void DFS(int ini){
    visitado[ini] = true;
    for(auto i:grafo[ini]) if(!visitado[i]) DFS(i);
}

int main(){

    ios::sync_with_stdio(false); cin.tie(0);

    cin>>vertices>>arestas;
    grafo.assign(vertices+1, vector<int>());
    visitado.assign(vertices+1, false);

    for(int i = 0 ; i < arestas ; i++){
        int n1, n2; cin>>n1>>n2;
        grafo[n1].push_back(n2);
        grafo[n2].push_back(n1);
    }

    int grupos = 0;
    for(int i = 1 ; i <= vertices ; i++){
        if(!visitado[i]){
            grupos++;
            DFS(i);
        }
    }

    cout<<grupos<<"\n";

    return 0;
}
