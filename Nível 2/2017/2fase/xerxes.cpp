#include <bits/stdc++.h>
using namespace std;
int main() {
	
    ios::sync_with_stdio(false);
    cin.tie(0);

    int ed, ex, casos, td = 0, tx = 0;
    cin>>casos;
    for(int caso = 0 ; caso < casos ; caso++){
        cin>>ed>>ex;
        if(ed == 0){
            if(ex == 1){
                td++;
            }else if(ex == 2){
                td++;
            }else if(ex == 3){
                tx++;
            }else if(ex == 4){
                tx++;
            }
        }else if(ed == 1){
            if(ex == 0){
                tx++;
            }else if(ex == 2){
                td++;
            }else if(ex == 3){
                td++;
            }else if(ex == 4){
                tx++;
            }
        }else if (ed == 2){
            if(ex == 1){
                tx++;
            }else if(ex == 0){
                tx++;
            }else if(ex == 3){
                td++;
            }else if(ex == 4){
                td++;
            }
        }else if(ed == 3){
            if(ex == 1){
                tx++;
            }else if(ex == 2){
                tx++;
            }else if(ex == 0){
                td++;
            }else if(ex == 4){
                td++;
            }
        }else if(ed == 4){
            if(ex == 1){
                td++;
            }else if(ex == 2){
                tx++;
            }else if(ex == 3){
                tx++;
            }else if(ex == 0){
                td++;
            }
        }
    }

    if(td > tx) cout<<"dario\n";
    else cout<<"xerxes\n";

    return 0;
}
