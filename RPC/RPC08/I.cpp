#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n, k; cin >> n >> k;
        map<string, int> original_medicine;
        priority_queue<pair<int, string>> medicine;
        for (int i = 0; i < n; i++)
        {
            pair<string, int> temp;
            cin >> temp.first >> temp.second;
            original_medicine.insert(temp);
            medicine.emplace(make_pair(temp.second, temp.first));
        }

        long long cont = 0;

        while(cont < k) {
            pair<int, string> temp2;
            temp2.second = medicine.top().second;
            cout << temp2.first << ' ' << temp2.second << endl;
            temp2.first = medicine.top().first + original_medicine[temp2.second];
            medicine.pop();
            medicine.push(temp2);
        }

        
    }

    return 0;
}