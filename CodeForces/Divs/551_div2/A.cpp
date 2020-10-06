#include <bits/stdc++.h>
#define DBG(x) do { std::cerr << #x << ": " << x << std::endl; } while (0)
const int MX = 1e9+7;

using namespace std;

int main() {
    int n, t; cin >> n >> t;

    int arr[n][2];

    for(int i=0; i<n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    pair<int, int> primero;
    primero.first = MX;
    for (int i = 0; i < n; i++)
    {
        int cont = arr[i][0];
        while(cont < t) {
            cont += arr[i][1];
        }
        if(cont < primero.first) {
            primero.first = cont;
            primero.second = i+1;
        }
    }

    cout << primero.second << endl;
    


    return 0;
}