#include <bits/stdc++.h>
using namespace std;

int vertices, arestas;

vector<pair<int, pair<int, int>>> grafo;

vector<int> uf;
int finduf(int x){
    return (uf[x] == x) ? x : (uf[x]=finduf(uf[x]));
}
bool sameuf(int x, int y){
    return finduf(x) == finduf(y);
}
void unionuf(int n1, int n2){
    int x = finduf(n1), y = finduf(n2);
    if(x != y) uf[y]=x;
}

int kruskal(){
    int retorno = 0;
    for(auto i:grafo){
        if(!sameuf(i.second.first, i.second.second)){
            retorno+=i.first;
            unionuf(i.second.first, i.second.second);
        }
    }
    return retorno;
}

int main() {
	
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin>>vertices>>arestas;

    for(int i = 0 ; i <= vertices ; i++) uf.push_back(i);

    for(int i = 0 ; i < arestas ; i++){
        int peso, n1, n2;
        cin>>n1>>n2>>peso;
        grafo.push_back({peso, {n1, n2}});
    }

    sort(grafo.begin(), grafo.end());

    int res = kruskal();
    cout<<res<<"\n"; 

    return 0;
}
