#include <bits/stdc++.h>

using namespace std;

int main(){

    string s; cin>>s;
    vector<int> freq(255);
    for(char c: s) freq[c]++;
    // cout<<freq[97]<<endl;



    //maximizar
    for(int i=97; i<122; i++){
        if(freq[i]>=2){
            if(freq[i]%2==0){
                // cout<<"entro"<<endl;
                freq[i+1]+=freq[i]/2;
                freq[i]=0;
            } else {
                freq[i+1]+=freq[i]/2;
                freq[i]=1;
            }
            // cout<<i<<": "<<freq[i]<<endl;
        }
    }
    

    for (int i = 122 ; i >= 97; i--)
    {
            // cout<<freq[i]<<endl/;
        for (int j = 0; j < freq[i]; j++)
        {
            cout<<char(i);

        }
        
        
    }

    // cout<<2%10;
    
    return 0;
}