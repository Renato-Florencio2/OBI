#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> inicios;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
	
    int casos;
    cin>>casos;

    while(casos--){
        int ini, fim;
        cin>>ini>>fim;
        inicios.push_back({ini, fim});
    }

    sort(inicios.begin(), inicios.end(), [](pair<int, int> &p1, pair<int, int> &p2){
        return p1.second < p2.second;
    });

    int maximo = 0, atual = 0;
    for(auto i:inicios){
        if(atual <= i.first){
            atual = i.second;
            maximo++;
        }
    }

    cout<<maximo<<"\n";

    return 0;
}
