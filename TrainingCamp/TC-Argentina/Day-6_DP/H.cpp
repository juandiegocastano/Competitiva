#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin>>s;

    if(s.size()>=5){

        for (int i = 0; i < s.size()-4; i++)
        {
            if(s[i]=='h'){
                for (int j = i+1; j < s.size()-3; j++)
                {
                    if(s[j]=='e'){
                        for (int k = j+1; k < s.size()-2; k++)
                        {
                            if(s[k]=='l'){
                                for (int l = k+1; l < s.size()-1; l++)
                                {
                                    if(s[l]=='l'){
                                        for (int m = l+1; m < s.size(); m++)
                                        {
                                            if(s[m]=='o'){
                                                cout<<"YES"<<endl;
                                                return 0;
                                            }
                                        }
                                        
                                    }
                                }
                                
                            }
                        }
                        
                    }
                }
                
            }
        }
    }

    cout<<"NO"<<endl;
    


    return 0;
}