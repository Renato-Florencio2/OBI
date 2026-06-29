// https://neps.academy/br/exercise/520

#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> cord;
map<pair<int, int>, bool> mapa;

int main(){

    ios::sync_with_stdio(false); cin.tie(nullptr);

    int casos, dist; cin>>casos>>dist;

    for(int i = 0 ; i < casos ; i++){
        pair<int, int> arv; cin>>arv.first>>arv.second;
        mapa[arv] = false;
        cord.push_back(arv);
    } mapa[cord[0]]=true;

    queue<pair<int, int>> fila; fila.push(cord[0]);
    while(!fila.empty()){
        auto at = fila.front(); fila.pop();
        for(int in = 0 ; in < casos ; in++){
            int x = at.first - cord[in].first, y = at.second - cord[in].second;

            if(sqrt(x*x+y*y) <= dist){
                if(!mapa[cord[in]]){
                    mapa[cord[in]]=true;
                    fila.push(cord[in]);
                }
            }
        }
    }

    for(auto i:mapa){
        if(!i.second){
            cout<<"N\n";
            return 0;
        }
    } cout<<"S\n";

    return 0;
}
