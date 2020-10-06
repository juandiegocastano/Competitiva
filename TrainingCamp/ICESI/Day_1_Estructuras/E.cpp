#include <bits/stdc++.h>

using namespace std;



int main(){

    int n; cin>>n;
    while(n--){
        int op; cin>>op;
        int inicial[op], prueba[op];
        for (int i = 0; i < op; i++)
        {
            cin>>inicial[i];
            prueba[i]=inicial[i];
        }

        bool termino=false;

        int cero[op] = {0};

        while(!termino){
            for (int i = 0; i < op-1; i++)
            {
                prueba[i]=abs(prueba[i]-prueba[i+1]);
            }
            prueba[op-1]=abs(prueba[op-1]-prueba[0]);
            cout<<"Hoola";
            
            if(prueba==inicial) {
                termino=true;
                cout<<"LOOP"<<endl;
                }
            else if(prueba==cero) {
                termino=true;
                cout<<"ZERO"<<endl;
                };
            

        }

        


            



        
    }

    return 0;
}