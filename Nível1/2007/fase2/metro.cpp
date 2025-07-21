#include <bits/stdc++.h>
using namespace std;

vector<int> paes;

int busca_bin(int pessoas, int maximo){
    int ini = 1, fim = maximo;
    int retorno = 0;
    while(ini<=fim){
        int meio = ini + (fim-ini)/2;
        
        int quant = 0;
        for(int i:paes) quant += i/meio;
        if(quant >= pessoas){
            retorno = meio;
            ini = meio+1;
        }else if(quant < pessoas){
            fim = meio-1;
        }
    }
    return retorno;
}

int main() {
	
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int pessoas, paos;
    cin>>pessoas>>paos;
    int maximo = 0;
    while(paos--){
        int n;
        cin>>n;
        paes.push_back(n);
        maximo = max(maximo, n);
    }

    int corte = busca_bin(pessoas, maximo);
    cout<<corte<<"\n";

    return 0;
}
