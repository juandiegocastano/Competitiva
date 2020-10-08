#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    priority_queue<int, vector<int>, greater<int> > q;

    for (int i = 0; i < n - 1; i++)
    {
        int x; cin >> x;
        q.push(x);
    }

    int cont = 1;
    bool termino = false;
    while(!termino) {
        int x = q.top(); q.pop();
        if(x != cont) {
            cout << cont << endl;
            termino = true;
        }
        cont++;
    }

}