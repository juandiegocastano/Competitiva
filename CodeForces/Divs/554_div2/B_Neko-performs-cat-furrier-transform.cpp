#include <bits/stdc++.h>
#define DBG(x) do { std::cerr << #x << ": " << x << std::endl; } while (0)
using namespace std;

vector<int> precal;
vector<int> nesimo;

// void calc() {
//     int curr = 0, cont = 0;
//     while(curr < 1e7) {
//         curr = pow(2, cont) - 1;
//         precal.push_back(curr);
//         cont++;
//     }
// }

void calc() {
    int curr = 0, cont = 0;
    precal.push_back(curr);
    nesimo.push_back(cont);
    while(curr < 1e7) {
        curr = (curr << 1) ^ 1;
        precal.push_back(curr);
        cont++;
        nesimo.push_back(cont);
    }
}

int main() {
    calc();
    for(int each: precal)
        cout << each << ' ';
    int x; cin >> x;
    int cont = 0;
    vector<int> ans;
    bool termino = false;
    while(!termino) {
        vector<int>::iterator up;
        up = lower_bound(precal.begin(), precal.end(), x);
        if(x == precal[up - precal.begin()]){
            // cont+=2;
            // ans.push_back(0);
            termino = true;}
        else {
            // DBG(x);
            // DBG(precal[up - precal.begin()]);
            x ^= precal[up - precal.begin()];
            // DBG(x);
            ans.push_back(nesimo[up - precal.begin()]);
            cont++;
            up = lower_bound(precal.begin(), precal.end(), x);
            if(x == precal[up - precal.begin()]){
                termino = true;
            } else {
                x++;
                cont++;
            }
            // if(cont > 10)
            //     termino = true;
        }
    }
    cout << cont << endl;
    for(int each: ans)
        cout << each << ' ';
    cout << endl;

    return 0;
}