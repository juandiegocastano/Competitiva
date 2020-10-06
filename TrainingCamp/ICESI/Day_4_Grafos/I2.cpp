#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> ii;

int m, n; 
char mat[100][100];
set<ii> contados;

void lookup(int i, int j) {
    queue<ii> to_check;
    if(i<m-1) to_check.push(make_pair(i+1,j));
    if(i<m-1 && j<n-1) to_check.push(make_pair(i+1,j+1));
    if(j<n-1) to_check.push(make_pair(i,j+1));
    if(i>0) to_check.push(make_pair(i-1,j));
    if(j>0) to_check.push(make_pair(i,j-1));
    if(i>0 && j>0) to_check.push(make_pair(i-1,j-1));

    while(!to_check.empty()) {
        int f = to_check.front().first;
        int s = to_check.front().second;
        to_check.pop();
        if( mat[f][s] == '@' && contados.count(make_pair(f, s))==0 ) {
            contados.insert(make_pair(f,s));
            lookup(f, s);
            }
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
				cout<<"Entra al for del main con "<<i<<" "<<j<<endl;
                cout<<"Imprimiendo la queue"<<endl;
				for(auto i: contados) cout<<"--------- "<<i.first<<" "<<i.second<<endl;
				lookup(i, j);
			}
		}
	}
	
	cout<<conjuntos<<endl;

	for(auto i: contados) cout<<"--------- "<<i.first<<" "<<i.second<<endl;
	return 0;
}
