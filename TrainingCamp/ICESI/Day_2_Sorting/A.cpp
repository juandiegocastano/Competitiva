#include <bits/stdc++.h>

using namespace std;

int main(){



    int cont=1;

    while(true){
        vector<int> vec;
        int N, Q; cin>>N>>Q;

        if(N!=0 && Q!=0){
            cout<<"CASE# "<<cont<<":"<<endl;  
            cont++;   
                while(N--){
                    int a; cin>>a;
                    vec.push_back(a);
                }

                sort(vec.begin(), vec.end());


                while(Q--)
                {
                    // cout<<"hola"<<endl;
                    int q, pos=-1; cin>>q;
                    bool termino=false;

                    // for(int each: vec) cout<<each<<" ";
                    // cout<<endl;

                    for (int i = 0; i < vec.size() && !termino;  i++)
                    {
                        if(vec[i]==q) {
                            pos=i+1;
                            // cout<<"entra "<<vec[i]<<endl;
                            termino=true;
                        } else if(vec[i]>=q) termino=true;
                    }
                    if(pos==-1) cout<<q<<" not found"<<endl;
                    else cout<<q<<" found at "<<pos<<endl;
                }

        } else return 0;

    }

  

    return 0;
}