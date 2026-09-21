// https://neps.academy/br/exercise/3580

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

struct DSU{
    vector<int> uf, peso;

    DSU(int quant){
        for(int i = 0 ; i <= quant ; i++){
            uf.push_back(i);
            peso.push_back(1);
        }
    }

    int find(int x){
        return (x == uf[x]) ? x : uf[x] = find(uf[x]);
    }
    bool same(int a, int b){
        return find(a) == find(b);
    }
    void unite(int a, int b){
        a = find(a); b = find(b);

        if(a == b) return ;

        if(peso[a] < peso[b]) swap(a, b);

        uf[b] = a;
        peso[a] += peso[b];
    }
};

struct Edge{
    int v1, v2, tipo;

    bool operator<(const Edge &other) const {
        return tipo < other.tipo;
    }
};

int vertices, arestas, anos;
vector<Edge> lista_arestas;

bool kruskal(){
    DSU dsu(vertices);
    for(auto i : lista_arestas){
        if(!dsu.same(i.v1, i.v2)){
            dsu.unite(i.v1, i.v2);
        } else{
            if(i.tipo == 1 || !anos) return false;
            else anos--;
        }
    }
    return true;
}

int main(){

    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    cin>>vertices>>arestas>>anos;

    for(int i = 1 ; i <= arestas ; i++){
        int v1, v2, tipo; cin>>v1>>v2>>tipo;
        lista_arestas.push_back({v1, v2, tipo});
    }

    sort(lista_arestas.begin(), lista_arestas.end());

    if(kruskal()) cout<<'S'<<endl;
    else cout<<'N'<<endl;

    return 0;
}
