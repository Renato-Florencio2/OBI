// https://neps.academy/br/exercise/3129

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

__int32_t main(){

    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int quant; cin>>quant;
    vector<int> conjunto(quant);
    for(int i = 0 ; i < quant ; i++) cin>>conjunto[i];

    sort(conjunto.begin(), conjunto.end());

    int resp = 0;
    for(int p1 = 0 ; p1 < quant ; p1++){
        for(int p2 = p1+1 ; p2 < quant ; p2++){
            for(int p3 = p2+1 ; p3 < quant ; p3++){
                if(conjunto[p1]+conjunto[p2] > conjunto[p3]) resp++;
            }
        }
    }

    cout<<resp<<endl;

    return 0;
}
