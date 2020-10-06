#include <bits/stdc++.h>

using namespace std;

int main(){

    string a;
    cin>>a;
    vector<int> vec;

    // for(char each: a){
    //     if(each!='+') vec.push_back(each-'0');
    // }

    for (int i = 0; i < a.size(); i++)
    {
        if(a[i]!='+') vec.push_back(a[i]-'0');
    }
    

    sort(vec.begin(), vec.begin()+vec.size());

    

    for (int i = 0; i < vec.size()-1; i++)
    {
        cout<<vec[i]<<'+';
    }
    cout<<vec[vec.size()-1]<<endl;
 
    return 0;
}