#include <iostream>
#include <string>
#include <cmath>
 
using namespace std;
 
int main()
{
    string s,t; cin >> s >> t;

    int actual = 0;
    for (int i = 0; i < t.length(); i++)
    {
        if(t[i]==s[actual]){
            actual++;
        }
    }
    cout<<actual+1;

    return 0;
}