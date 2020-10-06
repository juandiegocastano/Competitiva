#include <iostream>
#include <string>
#include <cmath>
 
using namespace std;
 
int main()
{
    int n, in; cin>>n;
    cin.ignore();

    int vec[n];

    for (int i = 0; i < n; i++)
    {
        cin>>in;
        vec[in-1]=i+1;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<vec[i]<<" ";
    }
    


    return 0;
}