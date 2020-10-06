#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    long long acum=0;

    bool termino = false;
    int i=1;
    while(!termino){
        
        if(acum<=n) {
            acum+=i*(i+1)/2;
            i++;
        } else termino=true;
    }
    
    cout<<i-2;
    

    return 0;
}