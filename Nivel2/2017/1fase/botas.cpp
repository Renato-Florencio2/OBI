#include <bits/stdc++.h>
using namespace std;
int main() {
	
    ios::sync_with_stdio(false);
    cin.tie(0);

    unordered_map<int, int> direito;
    unordered_map<int, int> esquerdo;

    int casos;
    cin>>casos;
    while(casos--){
        char c;
        int tam;
        cin>>tam>>c;
        if(c == 'D'){
            if(!direito.count(tam)) direito[tam]=1;
            else direito[tam]++;
        }else{
            if(!esquerdo.count(tam)) esquerdo[tam]=1;
            else esquerdo[tam]++;
        }
    }

    int total = 0;
    for(auto i:direito){
        while(i.second != 0 && esquerdo[i.first] != 0){
            total++;
            i.second--;
            esquerdo[i.first]--;
        }
    }

    cout<<total<<"\n";
    
    return 0;
}
