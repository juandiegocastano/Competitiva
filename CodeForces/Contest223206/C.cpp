#include <iostream>
#include <string>
#include <cmath>
 
using namespace std;
 
int main()
{

    int matriz[5][5];
    int xloc, yloc;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>matriz[i][j];
            if (matriz[i][j]==1){
                xloc=i+1;
                yloc=j+1;
            }
        }
    }

    cout<<abs(xloc-3)+abs(yloc-3);
 
    return 0;
}