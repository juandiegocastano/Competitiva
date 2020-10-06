#include <bits/stdc++.h>
#define DBG(x) do { std::cerr << #x << ": " << x << std::endl; } while (0)
using namespace std;

int main() {
    int n; cin >> n;
    int ones = 0, twos = 0;
    while (n--)
    {
        int val; cin >> val;
        if(val == 1)
            ones++;
        else twos++;
    }
    if(ones == 0) {
        while(twos--)
            cout << 2 << ' ';
    } else if(twos == 0) {
            while(ones--)
                cout << 1 << ' ';
    } else {
        cout << 2 << ' ';
        twos--;
        cout << 1 << ' ';
        ones--;
        while(twos){
            cout << 2 << ' ';
            twos--;
        }
        while(ones){
            cout << 1 << ' ';
            ones--;
        }

    }
    


    
    

    return 0;
}