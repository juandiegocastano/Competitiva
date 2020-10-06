#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;

    while(t--) {
        int a, b, c, ans;
        cin >> a >> b >> c;


            int ones = 0, twos = 0, three = 0, zeros = 0;
            if(a == 0) zeros++;
            if(b == 0) zeros++;
            if(c == 0) zeros++;
            if(a == 1) ones++;
            if(b == 1) ones++;
            if(c == 1) ones++;
            if(a == 2) twos++;
            if(b == 2) twos++;
            if(c == 2) twos++;
            if(a == 3) three++;
            if(b == 3) three++;
            if(c == 3) three++;
            if(zeros == 3) ans = 0;
            else if(zeros == 2) ans = 1;
            else if(zeros == 1) {
                if(ones >= 1) ans = 2;
                else ans = 3;
            }
            else if(ones >= 2 ) ans = 3;
            else if(ones == 1) ans = 4;
            else {
                if(twos >= 1) ans = 5;
                else if(three >= 2) ans = 6;
                else ans = 7;
            }
            

        
        cout << ans << endl;
    }






    return 0;
}