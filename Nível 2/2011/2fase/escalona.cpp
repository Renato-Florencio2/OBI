#include <bits/stdc++.h>
using namespace std;

int vertices, arestas;
vector<vector<int>> grafo;

vector<int> kahn(){
    vector<int> retorno;
    vector<int> pesos(vertices, 0);
    for(auto l:grafo) for(auto i:l) pesos[i]++;
   
    priority_queue<int, vector<int>, greater<int>> fila;
    for(int i = 0 ; i < vertices ; i++) if(pesos[i] == 0) fila.push(i);

    while(!fila.empty()){
        int at = fila.top();
        fila.pop();
        retorno.push_back(at);
        for(auto i:grafo[at]){
            pesos[i]--;
            if(pesos[i] == 0) fila.push(i);
        }
    }

    return retorno;
}

int main() {
	
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin>>vertices>>arestas;

    grafo.assign(vertices, vector<int>());

    for(int i = 0 ; i < arestas ; i++){
        int n1, n2;
        cin>>n1>>n2;
        grafo[n1].push_back(n2);
    }

    vector<int> resp = kahn();
    if(resp.size() != vertices) cout<<"*\n";
    else for(auto i:resp) cout<<i<<"\n";

    return 0;
}
