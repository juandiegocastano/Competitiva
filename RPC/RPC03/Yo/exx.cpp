#include <iostream>
 
using namespace std;

int main() {
    int n, num, m2=0; cin>>n;
    int m [4] = {0};
    for(int i=0; i<n; i++){
        cin>>num;
        if(n%2==0) m[0]++;
        if(n%3==0) m[1]++;
        if(n%4==0) m[2]++;
        if(n%5==0) m[3]++;
    }
    
    for(int i=0; i<4; i++){
        cout<<m[i]<<" Multiplo(s) de "<<i+2<<"\n";
    }
    
 
    return 0;
}