#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<pair<int, int>> papel;
    int picos = 0, vales = 0;
    unordered_map<int, int> mapaP, mapaV;
    pair<int, int> pontaF, pontaB;

    int casos;
    cin>>casos;
    for(int l = 0 ; l < casos ; l++){
        int atual;
        cin>>atual;

        if(int(papel.size()) == 0 || int(papel.size()) == 1){
            if(int(papel.size()) == 0){
                papel.push_back({atual, 0});
                continue;
            }else{
                if(atual == papel.back().first) continue;
                if(atual > papel.back().first){
                    papel.back().second = -1;
                    vales++;
                    mapaV[papel.back().first]++;
                    papel.push_back({atual, 1});
                    picos++;
                    mapaP[atual]++;
                    continue;
                }else{
                    papel.back().second = 1;
                    picos++;
                    mapaP[papel.back().first]++;
                    papel.push_back({atual, -1});
                    vales++;
                    mapaV[papel.back().first]++;
                    continue;
                }
            }
        }

        if(atual == papel.back().first) continue;
        if(papel.back().second == 1){
            if(atual > papel.back().first){
                mapaP[papel.back().first]--;
                papel.back().first = atual;
                mapaP[papel.back().first]++;
                continue;
            }else{
                papel.push_back({atual, -1});
                mapaV[atual]++;
                vales++;
                continue;
            }
        }else{
            if(atual < papel.back().first){
                mapaV[papel.back().first]--;
                papel.back().first = atual;
                mapaV[papel.back().first]++;
                continue;
            }else{
                papel.push_back({atual, 1});
                mapaP[atual]++;
                picos++;
                continue;
            }
        }
    }

    if(int(papel.size()) == 1 || int(papel.size()) == 2){
        cout<<2<<"\n";
        return 0;
    }

    pontaB = papel.back();
    pontaF = papel.front();
    sort(papel.begin(), papel.end());

    int ajuste = 0, total = 0;
    for(int i = 0 ; i < int(papel.size()) ; i++){
        if(papel[i].second == 1){
            ajuste--;
            continue;
        }else{
            if(papel[i] == papel[i-1]) continue;
            int anomalia = 0;
            if(pontaB.first > papel[i].first && pontaB.second == -1) anomalia++;
            if(pontaF.first > papel[i].first && pontaF.second == -1) anomalia++;
            total = max(total, ((picos - mapaP[papel[i].first]) - (vales - mapaV[papel[i].first]) + ajuste + anomalia));
            ajuste+=mapaV[papel[i].first];
            continue;
        }
    }

    cout<<total+1<<"\n";

    return 0;
}