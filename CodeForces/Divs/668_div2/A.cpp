#include <bits/stdc++.h>
#define DEBUG2(x) do { std::cerr << #x << ": " << x << std::endl; } while (0)
typedef long long ll;
const int MX = 1e6+5;
using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >>  arr[i];
        }

        for (int i = n - 1; i >= 0; i--)
        {
            cout << arr[i] << ' ';
        }
        cout << endl;
           
    }


    return 0;
}