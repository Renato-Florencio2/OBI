// https://neps.academy/br/exercise/3267

#include <bits/stdc++.h>
using namespace std;
int main() {
	
    ios::sync_with_stdio(false); cin.tie(0);

	int lin, col, mpc=0, mic=0; cin>>lin>>col;
	int matrizP[lin+1][col+1], matrizI[lin+1][col+1];

	for(int l = 1 ; l <= lin ; l++){
		for(int c = 1 ; c <= col ; c++){
			int x; cin>>x;
			if(l % 2 != 0){
				if(c % 2 != 0){
					if(x % 2 != 0){
						matrizI[l][c]=x;
						matrizP[l][c]=x+1; mpc+=1;
					} else{
						matrizI[l][c]=x+1; mic+=1;
						matrizP[l][c]=x;
					}
				} else{
					if(x % 2 != 0){
						matrizI[l][c]=x+1; mic+=1;
						matrizP[l][c]=x;
					} else{
						matrizI[l][c]=x;
						matrizP[l][c]=x+1; mpc+=1;
					}
				}
			} else{
				if(c % 2 != 0){
					if(x % 2 != 0){
						matrizI[l][c]=x+1; mic+=1;
						matrizP[l][c]=x;
					} else{
						matrizI[l][c]=x;
						matrizP[l][c]=x+1; mpc+=1;
					}
				} else{
					if(x % 2 != 0){
						matrizI[l][c]=x;
						matrizP[l][c]=x+1; mpc+=1;
					} else{
						matrizI[l][c]=x+1; mic+=1;
						matrizP[l][c]=x;
					}
				}
			}
		}
	}	

	int m = min(mpc, mic); cout<<m<<"\n";
	if(m == mpc){
		for(int l = 1 ; l <= lin ; l++){
			for(int c = 1 ; c <= col ; c++){
				cout<<matrizP[l][c]<<" ";
			}
			cout<<"\n";
		}
	} else{
		for(int l = 1 ; l <= lin ; l++){
			for(int c = 1 ; c <= col ; c++){
				cout<<matrizI[l][c]<<" ";
			}
			cout<<"\n";
		}
	}

	return 0;
}
