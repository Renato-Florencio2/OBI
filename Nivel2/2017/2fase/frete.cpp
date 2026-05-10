#include <bits/stdc++.h>
using namespace std;
#define C 100001

int vertices, arestas;

vector<vector<pair<int, int>>> grafo;

int dijkstra(){
    vector<int> dist;
    dist.assign(vertices+1, C);

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> fila_prioridade;

    dist[1]=0;
    fila_prioridade.push({0, 1});
    while(!fila_prioridade.empty()){
        int atualC = fila_prioridade.top().second, atualD = fila_prioridade.top().first;
        fila_prioridade.pop();

        if(dist[atualC] < atualD) continue;

        for(auto i:grafo[atualC]){
            if(dist[i.first] > i.second + dist[atualC]){
                dist[i.first]=i.second + dist[atualC];
                fila_prioridade.push({dist[i.first], i.first});
            }
        }
    }
    return dist[vertices];
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>vertices>>arestas;
    grafo.assign(vertices+1, vector<pair<int, int>>());

    for(int i = 0 ; i < arestas ; i++){
        int v1, v2, peso;
        cin>>v1>>v2>>peso;
        grafo[v1].push_back({v2, peso});
        grafo[v2].push_back({v1, peso});
    }

    cout<<dijkstra()<<"\n";

    return 0;
}