#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin>>n;
    cin.ignore();

    while(n--){
        stack<int> pila;
        string linea;
        getline(cin, linea);

        bool res=true;

        for (int i = 0; i < linea.size(); i++)
        {
            if(linea[i]=='(') pila.push(1); 
            else if(linea[i]=='[') pila.push(2);

            else if(!pila.empty()){
                if(linea[i]==')') {
                    if(pila.top()==1) pila.pop();
                    else {
                        res=false;
                        // break;
                        }
                    }
                else if(linea[i]==']') {
                    if(pila.top()==2) pila.pop();
                    else{
                        res=false;
                        // break;
                    }
            }} else {
                res=false;
                // break;
            }
        }

        if(pila.empty()&&res==true) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        

    }


    
    
    
 
    return 0;
}