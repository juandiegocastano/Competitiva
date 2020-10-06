#include <bits/stdc++.h>

using namespace std;

int main(){

    string s; cin>>s;
    vector<int> freq(255);
    for(char c: s) freq[c]++;

    priority_queue<int> v;

    int vec[]={1,2,3,5,8,13};
    int score = 1;
    for(auto i: vec){
        for (int j = 0; j < i; j++)
        {
            v.push(score);
        }
        score+=2;   
    }

    int ans=0;

    sort(freq.begin(), freq.end());


    int termino=false, i=0;

    while(!termino) {
        ans+=freq[i]*v.top();
        v.pop();
        i++;
    }
    
    return 0;
}