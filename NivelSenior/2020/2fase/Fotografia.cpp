// https://neps.academy/br/exercise/1021

#include <bits/stdc++.h>
using namespace std;
#define int long long

int idM = 0;
int getId(){
    idM++;
    return idM;
}

int n1, n2;

struct moldura{
    int mudanca;
    int espacoSobrando;
    int id;

    bool operator<(const moldura &other) const {
        if(espacoSobrando != other.espacoSobrando) return espacoSobrando < other.espacoSobrando;
        if(mudanca != other.mudanca) return mudanca < other.mudanca;
        return id < other.id;
    }
};
vector<moldura> vt;

__int32_t main(){

    ios::sync_with_stdio(false); cin.tie(nullptr);

    int casos; cin>>n1>>n2>>casos;

    for(int i = 0 ; i < casos ; i++){
        int m1, m2; cin>>m1>>m2;

        moldura at;
        at.id = getId();

        at.mudanca = 1;
        if(n1 > m1 || n2 > m2){
            swap(m1, m2);
            if(n1 > m1 || n2 > m2) continue;
            at.mudanca = 2;
        }

        int dif = (m1 * m2) - (n1 * n2);
        at.espacoSobrando=dif;

        vt.push_back(at);
    }

    sort(vt.begin(), vt.end());

    if(!vt.empty()) cout<<vt[0].id<<"\n";
    else cout<<-1<<"\n";

    return 0;
}
