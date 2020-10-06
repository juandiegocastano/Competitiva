#include <bits/stdc++.h>

using namespace std;

int main(){

    int Y, P;
    while( cin>>Y>>P && Y && P){
    int vec[P];

    for(int i = 0; i < P; i++)
    {
        cin>>vec[i];
    }

    int maxi=0;
    pair<int, int> years;

    for (int i = 0; i < P; i++)
    {
        long long num=vec[i]+Y;
        auto it = lower_bound(vec,vec+P, num);


        if(maxi<it-vec-i){
            // if( vec[P-1]<=num){
                
            // }
            maxi=it-vec-i;
            // cout<<i<<" entro "<<it-vec<<endl;
            years.first= *(it-maxi);
            years.second=*(it-1);

        }
    }

    cout<<maxi<<" "<<years.first<<" "<<years.second<<endl;

    }





    return 0;
}