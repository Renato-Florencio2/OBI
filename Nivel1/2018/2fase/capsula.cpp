// https://neps.academy/br/exercise/205

#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MAX = 1e9;
int num_capsulas, moedas;
vector<int> capsulas;

int lower_bound(){
    int l = 1, r = MAX, resp;

    while(l <= r){
        int mid = (l+r)/2;
        int moedas_criadas = 0;
        for(auto i:capsulas){
            moedas_criadas += mid / i;
        }

        if(moedas_criadas >= moedas){
            resp = mid;
            r = mid-1;
        } else{
            l = mid+1;
        }
    }

    return resp;
}

__int32_t main(){

    ios::sync_with_stdio(false); cin.tie(nullptr);

    cin>>num_capsulas>>moedas;

    for(int i = 0 ; i < num_capsulas ; i++){
        int capsula; cin>>capsula;
        capsulas.push_back(capsula);
    }

    cout<<lower_bound()<<"\n";

    return 0;
}