#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int n; cin>>n;

    for (int i = 0; i < n; i++)
    {
        int tam; cin>>tam;
        int vec [tam];
        int evenCount=0, oddCount=0;
        
        for (int j = 0; j < tam; j++)
        {
            cin>>vec[j];
            if((vec[j]%2)==0 ) {
                evenCount++;
                } else{
                    oddCount++;
                    }
        }

        sort(vec, vec+tam);

        if((evenCount%2==0) && (oddCount%2==0) ) cout<<"YES"<<"\n"; else {

            int consecCount=0;
            for (int i = 0; i < tam-1; i++)
            {
                if((vec[i+1]-vec[i]) == 1){
                    // cout<<"ENTRO";
                    consecCount++;
                }
            }
            // cout<<consecCount<<"\n";

            if(consecCount>=1) cout<<"YES"<<"\n"; else cout<<"NO"<<"\n";
            

        }

        

        
    }
    
    return 0;
}