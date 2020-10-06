#include <bits/stdc++.h>
using namespace std;
long long solution[101];

void recursion(int n) {
    solution[n] = solution[n-1] + pow(n,2);
    if(n <= 100)
    recursion(n+1);
}

void solve() {
    solution[1] = 1; 
    recursion(2);
}

int main() {
    int n;
    solve();
    while(cin >> n && n) {
        cout << solution[n] << endl;
    }



    return 0;
}