// https://neps.academy/br/exercise/3573

#include <bits/stdc++.h>
using namespace std;
#define int long long
__int32_t main(){

    ios::sync_with_stdio(false); cin.tie(nullptr);

    vector<int> conjunto;
    int tam; cin>>tam;
    int total = 0;
    for(int i = 0 ; i < tam ; i++){
        bool n; cin>>n;
        if(!n) total++;
        else{
            if(total != 0) conjunto.push_back(total);
            conjunto.push_back(-1);
            total=0;
        }
    } if(total != 0) conjunto.push_back(total);

    int possi = 0;
    for(int i = 0 ; i < conjunto.size() ; i++){
        if(conjunto[i] != -1) continue;
        int l = i-1, r = i+1, valor_l, valor_r;
        if(l < 0 || l >= conjunto.size()) valor_l=0;
        else{
            if(conjunto[l] == -1) valor_l=0;
            else valor_l = conjunto[l];
            
        }
        if(r < 0 || r >= conjunto.size()) valor_r=0;
        else{
            if(conjunto[r] == -1) valor_r=0;
            else valor_r = conjunto[r];
        }

        if(valor_l == 0 && valor_r == 0) possi++;
        else{
            if(valor_l == 0 && valor_r != 0) possi += 1*(valor_r+1);
            else if(valor_l != 0 && valor_r == 0) possi+= (valor_l+1)*1;
            else possi += (valor_r+1)*(valor_l+1);
        }
    }

    cout<<possi<<"\n";

    return 0;
}
