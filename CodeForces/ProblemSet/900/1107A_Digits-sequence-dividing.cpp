#include <bits/stdc++.h>
using namespace std;

int main() {

    int q; cin >> q;

    while(q--) {
        int n; cin >> n;
        string s; cin >> s;
        bool termino = false;

        if(s.size() == 2) {
            if(s[0] < s[1]) {
                cout << "YES" << endl << "2" << endl;
                cout << s[0] << " " << s[1] << endl;
            }
            else cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl << "2" << endl;
            cout << s[0] << " ";
            for (int i = 1; i < n; i++)
                cout << s[i];
            cout << endl;
        }
        
        
    }


    return 0;
}