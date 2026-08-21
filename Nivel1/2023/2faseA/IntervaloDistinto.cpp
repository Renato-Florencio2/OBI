// https://neps.academy/br/exercise/2438

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

__int32_t main(){

    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int tam; cin>>tam;
    vector<int> conj(tam+1);
    vector<bool> mapa(1e5+1);

    int pt1 = 0, pt2, resp = 0, quant = 0;
    for(pt2 = 0 ; pt2 < tam ; pt2++){
        int x; cin>>x;
        conj[pt2]=x;

        if(!mapa[x]){
            mapa[x] = true;
        } else{
            while(conj[pt1] != x){
                mapa[conj[pt1]]=false;
                quant--;
                pt1++;
            } pt1++; quant--;
        }

        quant++;

        resp = max(quant, resp);
    }

    cout<<resp<<endl;

    return 0;
}
