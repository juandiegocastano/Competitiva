#include <bits/stdc++.h>
using namespace std;

struct pedido {
    int c;
    int v;
    double ratio;
} ;

bool compare(pedido a, pedido b) {
    if(a.ratio == b.ratio)
        return a.v < b.v;
    else return a.ratio > b.ratio;
}

int main() {
    int n, t; cin >> n >> t;

    pedido pedidos[n];

    for (int i = 0; i < n; i++)
    {
        cin >> pedidos[i].c >> pedidos[i].v;
        pedidos[i].ratio = (pedidos[i].v * 1.0) / pedidos[i].c;
    }

    cout << pedidos[0].c;

    sort(pedidos, pedidos+n, compare);

    // int cost = 0;
    // bool termino = false;
    // while(!termino) {

    // }
    

    return 0;
}
