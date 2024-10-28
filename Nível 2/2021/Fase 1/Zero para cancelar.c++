#include <bits/stdc++.h>
using namespace std;
int main(){
	
	stack <int> soma;
	
	int casos, resultado = 0, res;
	
	cin >> casos;
	
	for(int i = 0 ; i < casos ; i++){
		
		cin >> res;
		
		if(res == 0) soma.pop();
		else soma.push(res);
		
	}
	
	int vezes = soma.size();
	
	for(int o = 0 ; o < vezes ; o++){
		
		resultado += soma.top();
		soma.pop();
		
	}
	
	cout << resultado << endl;
	
	return 0;
}