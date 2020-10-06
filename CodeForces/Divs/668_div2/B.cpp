#include <bits/stdc++.h>
#define DBG(x) do { std::cerr << #x << ": " << x << std::endl; } while (0)
typedef long long ll;
const int MX = 1e6+5;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        long long pos=0, neg=0;
        while(n--) {
            long long num; cin >> num;
            if(num < 0) {
                if(pos + num > 0)
                    pos += num;
                else {
                    neg += (num + pos);
                    pos = 0;
                }
            }
            else pos+=num;
        }
        cout << neg * - 1 << endl;

    }
    
    


    return 0;
}