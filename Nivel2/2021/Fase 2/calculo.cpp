#include <bits/stdc++.h>
using namespace std;
int main(){

    int num, p1, p2, vezes = 0;
    cin>>num>>p1>>p2;

    for(int i = p1 ; i <= p2 ; i++){

        int valor = 0;
        string numeroS = to_string(i);

        for(char o:numeroS) valor += (o - '0'); 

        if(valor == num) vezes++;
    
    }

    cout<<vezes<<endl;

    return 0;
}