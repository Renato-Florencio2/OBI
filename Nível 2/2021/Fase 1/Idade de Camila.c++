#include <bits/stdc++.h>
using namespace std;
int main(){
	
	list <int> idades;
	
	int res;
	
	cin >> res;
	idades.push_front(res);
	
	cin >> res;
	idades.push_front(res);
	
	cin >> res;
	idades.push_front(res);
	
	idades.sort();
	idades.pop_front();
	
	cout << idades.front() << endl;
		
	return 0;
}