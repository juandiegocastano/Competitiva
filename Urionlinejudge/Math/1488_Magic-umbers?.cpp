#include <bits/stdc++.h>
using namespace std;

int main() {
    int t = 1;
    int n;
    while(cin >> n && n) {
        cout << "Instancia " << t << endl;
        t++;
        if(n % 4 == 0) {
            int p = n / 4;
            cout << "1 " << p-1 << ' ' << p + 1 << ' ' << p << ' ' << p << endl;
        } else cout << n << " nao e quadripartido" << endl;
    }


    return 0;
}