// https://neps.academy/br/exercise/3128

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

__int32_t main(){

    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int reais, quant; cin>>reais>>quant;

    vector<int> frutas(101, INT_MAX);
    for(int i = 0 ; i < quant ; i++){
        int tipo, preco; cin>>tipo>>preco;
        frutas[tipo] = min(frutas[tipo], preco);
    }

    sort(frutas.begin(), frutas.end());

    int resp = 0;
    for(int i = 0 ; i < 100 ; i++){
        if(reais >= frutas[i]){
            resp++;
            reais -= frutas[i];
        } else break;
    }

    cout<<resp<<endl;

    return 0;
}
