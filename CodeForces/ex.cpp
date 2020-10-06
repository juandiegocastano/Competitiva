#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n; cin>>n;
    cin.ignore();
    for(int i=0; i<n; i++){
        string w;
        getline(cin,w);
        int s = w.length();
        cout<<w[0]<<(s-2)<<w[(s-1)];
    }
    

    return 0;
}
