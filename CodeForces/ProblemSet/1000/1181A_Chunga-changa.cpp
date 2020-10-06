#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, y, z;
    cin >> x >> y >> z;

    long long modx = x % z;
    long long mody = y % z;

    cout << (x + y) / z << " ";

    if(modx != 0 && mody != 0 && ( modx + mody >= z ) ){
        if(z - modx >= z - mody)
            cout << z - mody << endl;
        else cout << z - modx << endl;
    } else cout << 0 << endl;


    return 0;
}
