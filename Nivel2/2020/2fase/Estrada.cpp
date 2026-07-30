// https://neps.academy/br/exercise/1022

#include <bits/stdc++.h>
using namespace std;
#define int long long

double estrada, cidades;

vector<double> reta;
map<int, double> vizinhanca;

__int32_t main(){

    ios::sync_with_stdio(false); cin.tie(nullptr);

    cin>>estrada>>cidades;

    for(int i = 0 ; i < cidades ; i++){
        int x; cin>>x;
        reta.push_back(x);
    } sort(reta.begin(), reta.end());

    double menor = 1e9;
    for(int i = 0 ; i < cidades ; i++){
        if(i == 0){
            vizinhanca[reta[i]] += reta[i];
        }
        if(i == cidades-1){
            vizinhanca[reta[i]] += estrada - reta[i];
        } else {
            double var = (reta[i+1] - reta[i]) / 2;
            vizinhanca[reta[i]] += var;
            vizinhanca[reta[i+1]] += var;
        }

        menor = min(menor, vizinhanca[reta[i]]);
    }

    cout<<fixed<<setprecision(2);
    cout<<menor<<"\n";

    return 0;
}
