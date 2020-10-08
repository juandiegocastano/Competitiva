#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n; cin >> n;

    int cont = 5, ans = 0;
    while(cont < n) {
        cout << ans << endl;
        if(cont % 25 == 0) ans+=2;
        ans += cont / 5;
        cont += 5;
    }

    cout << ans << endl;

    return 0;
}