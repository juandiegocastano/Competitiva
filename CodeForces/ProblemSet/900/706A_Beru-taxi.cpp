#include <bits/stdc++.h>
using namespace std;

/*
    Link: https://codeforces.com/problemset/problem/706/A
    Description: Given a list of taxis (xi, yi) whis speed vi,
    cout fastest to arrive (a,b).
*/

int main() {
    int a, b; cin >> a >> b;
    int n; cin >> n;

    int taxis[n][3];
    double time[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> taxis[i][j];      
        }
    }


    int minimo = 0;

    for (int i = 0; i < n; i++)
    {
        int up, down;
        up = pow((taxis[i][0] - a), 2) + pow((taxis[i][1] - b), 2);
        down = pow( taxis[i][2], 2 );
        time[i] = sqrt( up * 1.0 / down );
        
        if(time[i] <= time[minimo] )
            minimo = i;
    }
    cout.precision(20);
    cout << fixed << double(time[minimo]) << endl;
        

    return 0;
}