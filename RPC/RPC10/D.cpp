#include <bits/stdc++.h>

using namespace std;

int main() {
    string fln; cin >> fln;
    string sfln; cin >> sfln;
    int tam = sfln.size();
    int ext_size = 0;
    if( '.' == sfln[tam-2] && 'c' == sfln[tam-1]) {
        ext_size = 2;
    }

    else if('.' == sfln[tam-3] && 'p' == sfln[tam-2] && 'y' == sfln[tam-1]) {
        ext_size = 3;
    }
    
    else if('.' == sfln[tam-4] && 'c' == sfln[tam-3] && 'p' == sfln[tam-2] && 'p' == sfln[tam-1]) {
        ext_size = 4;
    }

    else if('.' == sfln[tam-5] && 'j' == sfln[tam-4] && 'a' == sfln[tam-3] && 'v' == sfln[tam-2] && 'a' == sfln[tam-1]) {
        ext_size = 5;
    }

    else cout << "Compilation Error";


    



    int r, d, e;
    cin >> r >> d >> e;
    int c; cin >> c;
    string correct[c];
    for (int i = 0; i < c; i++)
    {
        string s; cin >> s;
        correct[i] = s;
    }

    int t; cin >> t;
    if(t != 0) {
        string output[t];
        for (int i = 0; i < c; i++)
        {
            string so; cin >> so;
            output[i] = so;
        }

    }
    

     


    return 0;
}