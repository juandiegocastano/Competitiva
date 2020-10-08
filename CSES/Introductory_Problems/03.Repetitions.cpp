#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int maxi = 1, count = 1;
    if(s.length() != 1) {
        for (int i = 0; i < s.length()-1; i++)
        {
            if(s[i] == s[i+1]) {
                count++;
            } else {
                count = 1;
            }
            maxi = max(maxi, count);
        }
    }
    cout << maxi << endl;    

    return 0;
}