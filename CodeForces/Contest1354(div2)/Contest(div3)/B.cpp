#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int n; cin>>n;

    for (int i = 0; i < n; i++)
    {
        int nAtletas; cin>>nAtletas;
        int vec [nAtletas];

        for (int j = 0; j < nAtletas; j++)
        {
            cin>>vec[j];
        }

        sort(vec, vec+nAtletas);

        int minDif=vec[1]-vec[0];

        for (int i = 0; i < nAtletas-1; i++)
        {
            if( (vec[i+1]-vec[i])<minDif ){
                minDif=vec[i+1]-vec[i];
            }
        }
        cout<<minDif<<"\n";
        

        //Algoritmo
        vector<int> a,b;

        b.push_back(vec[0]);
    

        
    }
    

// (c+d)*
    return 0;
}