// https://neps.academy/br/exercise/271

#include <bits/stdc++.h>
using namespace std;
__int32_t main(){

    ios::sync_with_stdio(false); cin.tie(nullptr);
    string resp = "";

    int casos; cin>>casos;
    while(casos--){
        string linha; cin>>linha;
        int abre[] = {0, 0, 0}, fecha[] = {0, 0, 0};
        stack<char> pilha;

        string r = "S";
        for(auto c:linha){
            if(c == '('){
                abre[0]++;
                pilha.push(c);
            }
            else if(c == '['){
                abre[1]++;
                pilha.push(c);
            }
            else if(c == '{'){
                abre[2]++;
                pilha.push(c);
            }
            else if(c == ')'){
                fecha[0]++;
                if(pilha.empty() || pilha.top() != '('){
                    r = 'N';
                    break;
                } else pilha.pop();
            }
            else if(c == ']'){
                fecha[1]++;
                if(pilha.empty() || pilha.top() != '['){
                    r = 'N';
                    break;
                } else pilha.pop();
            }
            else if(c == '}'){
                fecha[2]++;
                if(pilha.empty() || pilha.top() != '{'){
                    r = 'N';
                    break;
                } else pilha.pop();
            }

            if(abre[0] < fecha[0] || abre[1] < fecha[1] || abre[2] < fecha[2]){
                r = "N";
                break;
            }
        }
        if(abre[0] != fecha[0] || abre[1] != fecha[1] || abre[2] != fecha[2]){
            r = "N";
        }

        resp += r + '\n';
    }

    cout<<resp;

    return 0;
}
