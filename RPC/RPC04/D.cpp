#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B; cin>>A>>B;

    bool termino=false;
    int steps=0;

    while(!termino){
        if(A==B) {
            termino=true;
        } else {
            if(A>B){
                if(A%2==0) A=A/2; else A++;
            } else {
                steps+=B-A;
                termino=true;
            };
        }
        steps++;
    }
    cout<<steps-1<<endl;
    

    return 0;
}