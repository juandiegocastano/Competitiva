#include <iostream>
#include <string>
#include <cmath>
 
using namespace std;
 
int main()
{
    int n, m; cin>>n>>m;
    cin.ignore();

    int op=1;  
    for (int i = 0; i < n; i++)
    {
        if(i%2==0){
            cout<<string(m,'#')<<"\n";
        }
        else if(op==1){
            cout<<string(m-1,'.')<<'#'<<"\n";
            op=2;
        } else if(op==2){
            cout<<'#'<<string(m-1,'.')<<"\n";
            op=1;
        }
    }


    return 0;
}