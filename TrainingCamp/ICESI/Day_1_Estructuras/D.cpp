#include <bits/stdc++.h>

using namespace std;

int main(){

    int a; cin>>a;
    set<int> s;

    while(a--){

        long long a, b, ans; cin>>a>>b;
        if(a==b) ans=0; 
        else if(a%2==1 && b%2==1) ans=-1;
        else {
            bool termino=false;
            int turnos=0;
            while(!termino){
                if(a==b) termino=true;
                else if(a<b){
                    if(b-a < a*2) a*=2;
                    if(b-a > a*8) a*=8;
                    else if()
                }
            }


        }
    }
    
 
    return 0;
}