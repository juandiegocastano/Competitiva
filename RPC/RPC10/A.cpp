#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    set<string> s;
    while(n--) {
        string st; cin >> st;
        s.insert(st);
    }
    cout << s.size() << endl;

    return 0;
}