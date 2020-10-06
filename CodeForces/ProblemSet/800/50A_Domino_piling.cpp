#include <bits/stdc++.h>
using namespace std;

int main(){

    int M,N, res; cin>>M>>N;

    if(M%2==0 && N%2==0) res=N*(M/2); else if(N%2==0){
        res=N*( (M-1)/2 )+(N/2);
    } else if(M%2==0) {
        res=M*( (N-1)/2 )+(M/2);
    } else res=N*( (M-1)/2 )+(N-1)/2; 
    cout<<res;
    return 0;
}