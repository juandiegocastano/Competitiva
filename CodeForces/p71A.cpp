#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin>>n;
    cin.ignore();
    for(int i=0; i<n; i++){
        string w;
        getline(cin,w);
        int s = w.length();
        if(s>10){
            cout<<w[0]<<(s-2)<<w[(s-1)]<<'\n';
        } else cout << w<<'\n';
    }
    

    return 0;
}
