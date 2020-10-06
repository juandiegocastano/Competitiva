#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    queue<int> cola[n];
    for (int i = 0; i < n; i++)
    {
        int t; cin >> t;
        while(t--) {
            cola[i].push(t);
        }
    }

    int check[n];
    int mini;
    bool repite = false;
    for (int i = 0; i < n; i++)
    {
        check[i] = cola[i].front();
        if(mini == min(mini, check[i]))
            repite = true;
        mini = min(mini, check[i]);
    }

     


    return 0;
}