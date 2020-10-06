#include <bits/stdc++.h>

using namespace std;

int main(){

    int mat[5][5];
    pair<int, int> one;


    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>mat[i][j];
            if(mat[i][j]==1){
                one.first=i+1;
                one.second=j+1;
            }
        } 
    }

    int res=abs(one.first-3)+abs(one.second-3);
    cout<<res<<endl;
    
    return 0;
}