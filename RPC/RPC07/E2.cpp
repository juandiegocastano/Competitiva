#include <bits/stdc++.h>

using namespace std;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int memo[122][82][82];
vector<int> vec;

int bfs(int r, int c) {

}

int main() {
    int n; cin>>n;
    while(n--){
        int f; cin>>f;
        vec.resize(f);
        fill(vec.begin(), vec.end(), 0);
        for (int i = 0; i < f; i++) cin>>vec[i];

        int originR, originC; cin>>originR>>originC;
        int destR, destC; cin>>destR>>originC;

        queue<int> q;
        

    }

    return 0;
}