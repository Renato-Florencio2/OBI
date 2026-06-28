// https://neps.academy/br/exercise/16

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);

    int tam, casos; cin>>tam>>casos;
    vector<vector<int>> pref(tam+1, vector<int>(10, 0));
    vector<int> orig(tam+1, 0);

    for(int i = 1 ; i <= tam ; i++){
        int n; cin>>n; orig[i]=n;
        pref[i] = pref[i-1];
        pref[i][n]++;
    }

    vector<int> ocorrencias(10, 0); int ultimo; cin>>ultimo; ocorrencias[orig[ultimo]]++;
    for(int i = 1 ; i < casos ; i++){
        int at; cin>>at;
        
        if(at > ultimo) for(int in = 0 ; in < 10 ; in++) ocorrencias[in] += pref[at][in] - pref[ultimo][in];
        else for(int in = 0 ; in < 10 ; in++) ocorrencias[in] += pref[ultimo-1][in] - pref[at-1][in];
            
        ultimo = at;
    }

    for(auto i:ocorrencias) cout<<i<<" ";
    cout<<"\n";

    return 0;
}
