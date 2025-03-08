#include <bits/stdc++.h>
using namespace std;
int main(){

    stack <int> pilha;
    int casos, rec, total = 0;
    cin>>casos;

    for(int i = 0 ; i < casos ; i++){
        cin>>rec;
        if(rec == 0) pilha.pop();
        else pilha.push(rec);
    }

    while(!pilha.empty()){
        total+=pilha.top();
        pilha.pop();
    }

    cout<<total<<endl;

    return 0;
}