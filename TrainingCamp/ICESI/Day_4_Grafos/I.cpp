#include <bits/stdc++.h>

using namespace std;

int m, n; 
char mat[100][100];
set<pair<int, int> > contados;

void lookup(int i, int j) {
	if(i>=m || i<0 || j<0 || j>=n){
		cout<<"Cierra lookup con "<<i<<" "<<j<<endl;
		return;

	} 
	
	if(mat[i][j] == '@' && contados.count(make_pair(i, j))==0 ){
		cout<<"Agregando a"<<i<<" "<<j<<endl;
		contados.insert(make_pair(i, j));
		lookup(i+1,j);
		lookup(i,j+1);
		lookup(i+1,j+1);
		lookup(i-1, j);
		lookup(i, j-1);
		lookup(i-1, j-1);
	}
}


int main() {
	cin>>m>>n;
	for(int i = 0; i < m; ++i){
		for(int j = 0; j < n; ++j) {
			cin>>mat[i][j];
		}
	}

	int conjuntos = 0;
	
	for(int i = 0; i < m; ++i) {
		for(int j = 0; j < n; ++j) {
			if(mat[i][j] == '@' && contados.count(make_pair(i, j))==0 ){
				conjuntos++;
				cout<<"Entro con "<<i<<" "<<j<<endl;
				for(auto i: contados) cout<<"--------- "<<i.first<<" "<<i.second<<endl;
				lookup(i, j);
			}
		}
	}
	
	cout<<conjuntos<<endl;

	for(auto i: contados) cout<<"--------- "<<i.first<<" "<<i.second<<endl;
	return 0;
}
