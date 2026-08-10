// https://neps.academy/br/exercise/297

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAX = LLONG_MAX;

struct Edge{
    int to;
    int weight;

    bool operator>(const Edge &other) const {
        return weight > other.weight;
    }
};

int vertices, arestas;
vector<vector<Edge>> grafo;
vector<int> menorCaminho;

void djikstra(){
    priority_queue<Edge, vector<Edge>, greater<Edge>> fp;
    fp.push({0, 0});

    while(!fp.empty()){
        auto at = fp.top(); fp.pop();

        if(at.weight >= menorCaminho[at.to]) continue;
        menorCaminho[at.to] = at.weight;
        
        for(auto i:grafo[at.to]){
            int soma = i.weight + at.weight;
            if(soma <= menorCaminho[i.to]){
                fp.push({i.to, soma});
            }
        }
    }
}

__int32_t main(){

    ios::sync_with_stdio(false); cin.tie(nullptr);

    cin>>vertices>>arestas;
    menorCaminho.assign(vertices+2, MAX);
    grafo.assign(vertices+2, vector<Edge>());

    for(int i = 0 ; i < arestas ; i++){
        int n1, n2, peso;
        cin>>n1>>n2>>peso;
        grafo[n1].push_back({n2, peso});
        grafo[n2].push_back({n1, peso});
    }

    djikstra();

    cout<<menorCaminho[vertices+1]<<'\n';

    return 0;
}
