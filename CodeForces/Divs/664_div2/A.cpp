#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long r, g, b, w;
        cin >> r >> g >> b >> w;
        long long mini = min(r, g);
        mini = min(mini, b);
        int flag = 0;
        if(r == b && b == mini) flag++;
        if(b == g && b == mini) flag++;
        if(r == g && g == mini) flag++;
        string ans = "No";
        
        int pares = 0;
        if (r % 2 == 0 ) pares++;
        if (g % 2 == 0 ) pares++;
        if (b % 2 == 0 ) pares++;
        if (w % 2 == 0 ) pares++;
        if(pares == 4 || pares == 3) ans = "Yes";
        else if(flag == 0) {
            if(mini != 0 && pares == 1) ans = "Yes";
        } else if(flag == 1 || flag == 2) {
            if(mini != 0) {
                if(mini % 2 == 0 && pares == 2) ans = "Yes"; 
                else if(pares == 1) ans = "Yes";
            }
        } else if(flag == 3) ans = "Yes";

        cout << ans << endl;
    }



    return 0;
}