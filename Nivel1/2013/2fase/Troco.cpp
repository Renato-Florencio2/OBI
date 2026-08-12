// https://neps.academy/br/exercise/509

#include <bits/stdc++.h>
using namespace std;
#define int long long

__int32_t main(){

    ios::sync_with_stdio(false); cin.tie(nullptr);

    int valorDesejado, quantidadeMoedas;
    cin>>valorDesejado>>quantidadeMoedas;

    vector<bool> valoresPossiveis(valorDesejado+1, false);
    valoresPossiveis[0] = true;
    for(int i = 0 ; i < quantidadeMoedas ; i++){
        int moeda; cin>>moeda;
        if(moeda > valorDesejado) continue;

        for(int n = valorDesejado ; moeda <= n ; n--){
            if(valoresPossiveis[n-moeda]) valoresPossiveis[n] = true;
        }

        if(valoresPossiveis[valorDesejado]){
            cout<<"S\n";
            return 0;
        }
    }

    cout<<"N\n";

    return 0;
}
