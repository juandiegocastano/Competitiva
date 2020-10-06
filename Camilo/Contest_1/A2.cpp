#include <bits/stdc++.h>

using namespace std;

int main() {

    int t; cin>>t;

    while(t--){
        int n, x; cin>>n>>x;
        int vec[n];

        int best = 0;
        for (int a = 0; a < n; a++) {
        int sum = 0;
            for (int b = a; b < n; b++) {
            sum += vec[b];
            best = max(best,sum);
            }
        }
        cout << best << "\n"; 
    }
    return 0;
}