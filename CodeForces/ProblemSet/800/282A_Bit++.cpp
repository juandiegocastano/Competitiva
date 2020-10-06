#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    long long acum=0;

    while(n--){
        char a,b,c;
        cin>>a>>b>>c;
        if(a=='X'){
            if(b=='-') acum--; else acum++;
        } else if(a=='-') acum--; else acum++;
    }
    cout<<acum;
    

    return 0;
}