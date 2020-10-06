#include <bits/stdc++.h>
using namespace std;

const int tam=1e5+5;
const int oo=1e9;

int N,K, memo[tam], h[tam];

int f(int i){
    if(i==N-K-1) return 0; //Caso base
    if(memo[i] != -1) return memo[0]; //Caso dp 

    int ans = oo;

    for (int j = 0; j < K; j++)
    {
        ans = min(ans, f(i+j) );
    }

    return memo[i]=ans;
     
}


int main(){

    cin>>N>>K; 
    memset(memo, -1, sizeof memo);
    for (int i = 0; i < N; i++) cin>>h[i];

    cout<<f(0)<<endl;



    return 0;

}