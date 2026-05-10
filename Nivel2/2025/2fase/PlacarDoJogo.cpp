// https://neps.academy/br/exercise/3263

#include <bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false); cin.tie(0);

    int totalP=0, totalC=0, nP, nC;
    priority_queue<pair<int, char>, vector<pair<int, char>>, greater<pair<int, char>>> gols;

    cin>>nP;
    while(nP--){
        int min; cin>>min;
        gols.push({min, 'p'});
    }

    cin>>nC;
    while(nC--){
        int min; cin>>min;
        gols.push({min, 'c'});
    }

    cout<<"0 0\n";
    while(!gols.empty()){
        if(gols.top().second == 'p') totalP++;
        else totalC++;
        cout<<totalP<<" "<<totalC<<"\n";
        gols.pop();
    }

    return 0;
}
