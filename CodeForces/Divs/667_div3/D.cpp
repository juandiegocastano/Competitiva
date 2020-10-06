#include <bits/stdc++.h>
using namespace std;
int main() {

    int t; cin >> t;

    while(t--) {
        long long n, s; cin >> n >> s;

        bool termino = false;
        int x = 1;
        long long mini = 1;
        while(!termino) {
            if( (x * (x+1) / 2) > s)
                termino = true;
            else {
                mini  = x;
                x++;
            }
        }

        if(n < mini)
            cout << n << endl;
        else cout << n - s << endl;
    }


    return 0;
}