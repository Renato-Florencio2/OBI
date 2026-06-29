// https://neps.academy/br/exercise/980

#include <bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false); cin.tie(nullptr);

    int quant; cin>>quant;

    unordered_map<int, int> necessidades;
    for(int i = 0 ; i < quant ; i++){
        int n; cin>>n;
        necessidades[n]++;
    }

    int tipo1, tipo2; cin>>tipo1>>tipo2;

    if(tipo1 < necessidades[1] || tipo2 < necessidades[2]) cout<<"N\n";
    else cout<<"S\n";

    return 0;
}
