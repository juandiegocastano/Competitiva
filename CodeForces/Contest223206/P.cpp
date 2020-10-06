#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, event, acum=0, unpunished=0; cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>event;
        if(event>0){
            acum+=event;
        } else {
            if(acum>0){
                acum--;
            } else unpunished++;
        }
    }

    cout<<unpunished;
    

    return 0;
}