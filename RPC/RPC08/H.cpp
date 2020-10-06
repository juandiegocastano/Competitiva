#include <bits/stdc++.h>
using namespace std;
const int MXN = 1e6+2;
long long triangles[MXN];


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    triangles[0] = 4;
    for (int i = 1; i < MXN; i++)
    {
        triangles[i] = triangles[i-1] + 8;
    }
    
    for (int i = 1; i < MXN; i++)
    {
        triangles[i] += triangles[i-1];
    }
    cout << triangles[1000001] << endl;
    // cout << triangles[1];
    
    
    while(t--) {
        long long n; 
        cin >> n;
        long long* val;
        int triangle_num;
        if(n >= triangles[0]){
            val = lower_bound(triangles, triangles+n, n);
            triangle_num = val-triangles;
        } else triangle_num = 0;

        long long triangle_size, saltos_internos;
        if(triangle_num != 0){
            triangle_size = *val-*(val-1);
            saltos_internos = n - *(val - 1);
        }
        else {
            triangle_size = 4;
            saltos_internos = n;
        }
        int y_coord, x_coord;
        
        // cout << triangle_num << endl;
        // cout << triangle_size << endl;
    
        // cout << saltos_internos << endl;
        // cout << *val << endl;

        // Tramo inferior
        long long inf, izq, der;
        inf = triangle_size / 2;
        izq = inf + (triangle_size / 3) - 1;
        if(triangle_num == 0) izq++;
        der = izq + (triangle_size / 3);
        // cout << inf << endl;
        // cout << izq << endl;
        // cout << der << endl;
        if(saltos_internos <= inf) {
            y_coord = -triangle_num;
            x_coord = ((triangle_size / 2) / 2) - saltos_internos;
            // cout << y_coord << ' ' << x_coord << endl;            
        } else if(saltos_internos <= izq) {
            saltos_internos -= inf;
            y_coord = -triangle_num + saltos_internos;
            x_coord = -((triangle_size / 2) / 2) + saltos_internos;
            // cout << y_coord << ' ' << x_coord << endl;
        } else {
            saltos_internos -= izq;
            // cout << "entro" << saltos_internos << endl;
            y_coord = triangle_num - saltos_internos + 1;
            x_coord = saltos_internos;
        }
            cout << x_coord << ' ' << y_coord << endl;




    }


    return 0;
}