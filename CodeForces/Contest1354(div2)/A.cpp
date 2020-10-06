#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;

int main(){
    int n; cin>>n;

    for(int i=0; i<n; i++){
        long long a,b,c,d; cin>>a>>b>>c>>d;
        long long porDormir=a-b,usadas=b;
        if(b>=a){
            cout<<b<<"\n";
        } else if(c<=d){
            cout<<"-1\n";
        } else {
            
            // cout<<int(porDormir)/(c-d)<<"\n";
            if(porDormir%(c-d)==0) cout<< b+(c)*(int(porDormir)/(c-d))<<"\n"; else{
                cout<< b+(c)*((int(porDormir)/(c-d))+1) <<"\n";
            }

        }
    }

// (c+d)*
    return 0;
}