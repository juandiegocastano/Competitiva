#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n], b[n];

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    int cap1 = 0, pos1 = 0, cap2 = 0;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        if(b[i] >= cap1) {
            cap1 = b[i];
            pos1 = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(b[i] >= cap2 && i != pos1) {
            cap2 = b[i];
        }
    }

    if(sum <= cap1 + cap2)  
        cout << "YES" << endl;
    else cout << "NO" << endl;


    

    
    


    return 0;
}