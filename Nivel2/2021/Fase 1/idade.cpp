#include <bits/stdc++.h>
using namespace std;
int main(){

    int id1, id2, id3;
    cin>>id1>>id2>>id3;

    if((id1 >= id2 && id1 <= id3) || (id1 >= id3 && id1 <= id2)) cout<<id1;
    else if((id2 >= id1 && id2 <= id3) || (id1 >= id3 && id2 <= id1)) cout<<id2;
    else if((id3 >= id2 && id3 <= id1) || (id3 >= id1 && id3 <= id2)) cout<<id3;

    return 0;
}