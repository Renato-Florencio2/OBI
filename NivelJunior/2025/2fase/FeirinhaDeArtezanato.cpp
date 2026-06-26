// https://neps.academy/br/exercise/3264

#include <bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false); cin.tie(0);

    priority_queue<int, vector<int>, greater<int>> tipo1, tipo2;
    int estoque, total = 0; cin>>estoque;

    vector<int> vt(estoque);
    for(int i = 0 ; i < estoque ; i++) cin>>vt[i];
    for(int i = 0 ; i < estoque ; i++){
        int n; cin>>n;
        if(vt[i] == 1) tipo1.push(n);
        else tipo2.push(n);
    }

    int casos; cin>>casos;
    while(casos--){
        int caso; cin>>caso;
        if(caso == 0){
	    if(tipo1.empty() && tipo2.empty()) continue;

            if(tipo1.empty()){
                total+=tipo2.top();
                tipo2.pop();
                continue;
            } else if(tipo2.empty()){
                total+=tipo1.top();
                tipo1.pop();
		        continue;
            }

            if(tipo1.top() <= tipo2.top()){
                total+=tipo1.top();
                tipo1.pop();
            } else{
                total+=tipo2.top();
                tipo2.pop();
            }
        } else{
            if(caso == 1){
                if(tipo1.empty()) continue;
                total+=tipo1.top();
                tipo1.pop();
            } else{
                if(tipo2.empty()) continue;
                total+=tipo2.top();
                tipo2.pop();
            }
        }
    }

    cout<<total<<"\n";

    return 0;
}