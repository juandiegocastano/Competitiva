#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;

long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res % mod * res % mod * a % mod;
    else
        return res % mod * res % mod;
}

int main() {
    int n; cin >> n;
    while(n--) {
        int a, b; cin >> a >> b;
        cout << binpow(a, b) % mod << endl;
    }


    return 0;
}