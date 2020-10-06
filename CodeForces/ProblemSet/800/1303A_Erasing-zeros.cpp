#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int fzero=-1, fone=-1, sol=0;
        for (int i = 0; i < s.size()-1; i++)
        {
            if(s[i]=='1'){
                bool termino=false;
                int subsol=0;
                for (int j = i+1; j < s.size() && !termino; j++)
                {
                    if(s[j]=='0') {
                        subsol++;
                    if(j==s.size()-1) subsol=0;
                    }
                    else termino=true;
                }
                sol+=subsol;   
            }

            }
        cout<<sol<<endl;
        }

    return 0;
}