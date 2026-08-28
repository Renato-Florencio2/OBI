// https://neps.academy/br/exercise/318

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

struct Edge{
	int weight;
	int v1;
	int v2;
	int type;
	
	bool operator<(const Edge &other) const {
		if(type != other.type) return type < other.type;
		return weight < other.weight;
	}
};

int vertices, arestas;
vector<Edge> grafo;

vector<int> uf, peso;
int finduf(int x){
	return (uf[x] == x) ? uf[x] : finduf(uf[x]);
}
bool sameuf(int n1, int n2){
	n1 = finduf(n1); n2 = finduf(n2);
	return n1 == n2;
}
void unionuf(int n1, int n2){
	n1 = finduf(n1); n2 = finduf(n2);
	
	if(n1 == n2) return ;
	if(peso[n1] < peso[n2]) swap(n1, n2);
	
	uf[n2] = n1;	
	peso[n1] += peso[n2];
}

int kruskal(){
	int soma = 0;
	for(auto &i:grafo){
		if(!sameuf(i.v1, i.v2)){
			soma += i.weight;
			unionuf(i.v1, i.v2);
		}
	}
	return soma;
}	

__int32_t main(){

	ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int v1, v2; cin>>vertices>>v1>>v2;
	
	for(int i = 0 ; i <= vertices ; i++){
		uf.push_back(i);
		peso.push_back(1);
	}

	for(int i = 0 ; i < v1 ; i++){
		int n1, n2, peso; cin>>n1>>n2>>peso;
		grafo.push_back({peso, n1, n2, 1});
	}
	
	for(int i = 0 ; i < v2 ; i++){
		int n1, n2, peso; cin>>n1>>n2>>peso;
		grafo.push_back({peso, n1, n2, 2});
	}
	
	sort(grafo.begin(), grafo.end());

	cout<<kruskal()<<endl;

	return 0;
}

