#include <iostream>
#include <string>
#include <cmath>
 
using namespace std;
 
int main()
{
    int n, groups=1; cin>>n;
    cin.ignore();

    string actual, prev;
    cin>>actual;

    for (int i = 0; i < n-1; i++)
    {
        cin>>prev;
        if(actual!=prev) {
            groups++;}
        actual=prev;
    }
    cout<<groups;


    return 0;
}