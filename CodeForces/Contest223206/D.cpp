#include <iostream>
#include <string>
#include <cmath>
 
using namespace std;
 
int main()
{
    int n, freeRooms=0; cin>>n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        int a, b; cin >> a >> b;  
        if( (b-a)>=2 ) {
            freeRooms++;
        }  
    }
    cout<<freeRooms;
    return 0;
}