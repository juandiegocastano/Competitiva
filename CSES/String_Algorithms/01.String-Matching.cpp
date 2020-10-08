#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    int l = b.size();
    int ans = 0;
    for (int i = 0; i < a.size() - l; i++)
    {
        cout << a.substr(i,i+l) << endl;
        if(a.substr(i,i+l) == b)
            ans++;
    }
    cout << ans << endl;

    return 0;
}