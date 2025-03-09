#include <bits/stdc++.h>
using namespace std;
bool vogal(char l){
    return l=='a' || l=='e' || l=='i' || l=='o' || l=='u';
}
int main(){

    string palavra, cifrado, alfabeto = "abcdefghijklmnopqrstuvwxyz";
    cin>>palavra;

    for(char letra:palavra){
        cifrado+=letra;

        if(vogal(letra)) continue;

        int i = alfabeto.find(letra);
        int i1 = i-1, i2 = i+1;

        while(i1 >= 0 && !vogal(alfabeto[i1])) i1--;

        while(i2 <= 25 && !vogal(alfabeto[i2])) i2++;

        if(i-i1 <= i2-i || i2 > 25) cifrado+=alfabeto[i1];
        else cifrado+=alfabeto[i2];

        if(alfabeto[i] != 'z'){
            if(vogal(alfabeto[i+1])) cifrado+=alfabeto[i+2];
            else cifrado+=alfabeto[i+1];
        }else cifrado+='z';
    }

    cout<<cifrado<<endl;
    
    return 0; 
}