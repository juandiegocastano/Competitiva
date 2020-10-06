#include <bits/stdc++.h>
using namespace std;

vector<int> people;
vector<int> combination;
vector<int> mult;
long long res=0;


    int multi(const vector<int>& v){
        long long ans=1;
        for (int i = 0; i < v.size(); ++i) { ans*=v[i]; }
        return ans;
    }

    void go(int offset, int k) {
        if (k == 0) {
            cout<<"ENTRO"<<endl;
            res+=multi(combination);
            cout<<res<<endl;

            return;
        }

        for (int i = offset; i <= mult.size() - k; ++i) {
            combination.push_back(mult[i]);


            go(i+1, k-1);
            combination.pop_back();
        }
    }

int main(){


    string line; cin>>line;

    vector<char> vec(line.begin(), line.end());


    sort(vec.begin(), vec.end());

    // count+=vec.size();
    // count++;

    int count = 1;

    for (int i = 1; i <= vec.size(); i++)
    {
        if(vec[i]==vec[i-1]) count++; else{
            mult.push_back(count);
            count=1;
        }
        
    }
    mult.push_back(count);

    // for (int i = 1; i < mult.size(); i++)
    // {
    //     cout<<"ntro"<<endl;
    //     go(0,i);
    // }

    go(0,3);

    cout<<res;

    return 0;
}