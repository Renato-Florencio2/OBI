#include <bits/stdc++.h>
using namespace std;

int vertices, arestas, casos;

vector<int> idades;
vector<vector<int>> grafo;
vector<bool> verificado;

int bfs(int inicio){
    int retorno = 101;
    verificado.assign(vertices+1, 0);

    queue<int> fila;
    fila.push(inicio);
    verificado[inicio]=1;

    while(!fila.empty()){
        int atual = fila.front();
        fila.pop();

        if(idades[atual] <= retorno && atual != inicio) retorno = idades[atual];

        if(atual == inicio && grafo[atual].size() == 0) return 101;

        for(int i:grafo[atual]){
            if(!verificado[i]){
                fila.push(i);
                verificado[i]=1;
            }
        }
    }

    return retorno;
}

void troca(int v1, int v2){
    swap(grafo[v1], grafo[v2]);
    for(int i = 1 ; i <= vertices ; i++){
        for(int o = 0 ; o < grafo[i].size() ; o++){
            if(grafo[i][o] == v1) grafo[i][o] = v2;
            else if(grafo[i][o] == v2) grafo[i][o] = v1;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

	string resposta = "";

    cin>>vertices>>arestas>>casos;

    idades.push_back(0);
    for(int i = 0 ; i < vertices ; i++){
        int n;
        cin>>n;
        idades.push_back(n);
    }

    grafo.assign(vertices+1, vector<int>());
    for(int i = 0 ; i < arestas ; i++){
        int v1, v2;
        cin>>v1>>v2;
        grafo[v2].push_back(v1);
    }

    for(int caso = 0 ; caso < casos ; caso++){
        char escolha;
        cin>>escolha;

        if(escolha == 'T'){
            int v1, v2;
            cin>>v1>>v2;
            troca(v1, v2);
        }else{
            int inicio;
            cin>>inicio;
            int res = bfs(inicio);
            if(res == 101) resposta+="*\n";
            else resposta+=to_string(res)+"\n";
        }
    }

    cout<<resposta;

    return 0;
}
