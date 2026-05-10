// https://neps.academy/br/exercise/3266

#include <bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false); cin.tie(0);

    multiset<pair<int, int>> preco_tipo, tipo_preco;
    long long estoque, tipos, total = 0; cin>>estoque>>tipos;

    vector<int> vt(estoque);
    for(int i = 0 ; i < estoque ; i++) cin>>vt[i];
    for(int i = 0 ; i < estoque ; i++){
        int n; cin>>n;
        preco_tipo.insert({n, vt[i]});
        tipo_preco.insert({vt[i], n});
    }

    int casos; cin>>casos;
    for(int i = 0 ; i < casos ; i++){
        int caso; cin>>caso;
        if(caso == 0){
            if(preco_tipo.empty()) continue;
            auto it = preco_tipo.begin();
            total+=it->first;
            tipo_preco.erase(tipo_preco.find({it->second, it->first}));
            preco_tipo.erase(it);
	    } else{
            if(preco_tipo.empty()) continue;
            auto it = tipo_preco.lower_bound({caso, INT_MIN});
            if(it == tipo_preco.end() || it->first != caso) continue;
            total+=it->second;
            preco_tipo.erase(preco_tipo.find({it->second, it->first}));
            tipo_preco.erase(it);
        }
    }

    cout<<total<<"\n";

    return 0;
}
