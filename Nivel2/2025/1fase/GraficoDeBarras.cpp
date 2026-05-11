// https://neps.academy/br/exercise/3126

#include <bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false); cin.tie(0);

    int casos; cin>>casos;
    vector<int> vt(casos);
    int maior=INT_MIN;
    for(int i = 0 ; i < casos ; i++){ 
        cin>>vt[i];
        maior = max(maior, vt[i]);
    }

    for(int l = maior ; l >= 1 ; l--){
        for(int c = 0 ; c < casos ; c++){
            if(l > vt[c]) cout<<"0 ";
            else cout<<"1\n";
        }
        cout<<"\n";
    }

    return 0;
}
