#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    string s, ans; cin >> s;
    ans.resize(n);

    int mid = n / 2;

    if(n % 2 == 0) {
        int cont = 1;
        for (int i = 1; i < n; i+=2){
            ans[mid+cont-1] = s[i];
            ans[mid-cont] = s[i-1];
            cont++;
        }    
    } else {
        int cont = 1;
        for (int i = 0; i < n; i+=2){
            ans[mid+cont-1] = s[i];
            ans[mid-cont] = s[i+1];
            cont++;
        }    
    }

    cout << ans << endl;





    return 0;
}