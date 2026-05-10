#include <bits/stdc++.h>
using namespace std;
int main(){

    map<char, bool> alfa;
    alfa['a'] = false;
    alfa['b'] = false;
    alfa['c'] = false;
    alfa['d'] = false;
    alfa['e'] = false;
    alfa['f'] = false;
    alfa['g'] = false;
    alfa['h'] = false;
    alfa['i'] = false;
    alfa['j'] = false;
    alfa['k'] = false;
    alfa['l'] = false;
    alfa['m'] = false;
    alfa['n'] = false;
    alfa['o'] = false;
    alfa['p'] = false;
    alfa['q'] = false;
    alfa['r'] = false;
    alfa['s'] = false;
    alfa['t'] = false;
    alfa['u'] = false;
    alfa['v'] = false;
    alfa['w'] = false;
    alfa['x'] = false;
    alfa['y'] = false;
    alfa['z'] = false;

    int lixo, ate;
    string palavra;
    bool ver;

    cin>>lixo>>palavra;
    for(int i = 0 ; i < palavra.size() ; i++){
        if(alfa[palavra[i]] == false){
            alfa[palavra[i]] = true;
            ate = i;
            ver=false;
        }else ver = true;
    }

    if(ver) for(int i = 0 ; i <= ate ; i++) cout<<palavra[i];
    else cout<<"*\n";
    cout<<endl;

    return 0;
}
