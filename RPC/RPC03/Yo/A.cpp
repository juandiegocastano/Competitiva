#include <bits/stdc++.h>
#include <typeinfo>
using namespace std;

int main()
{

    // cout<< fixed<<setprecision(12);
    int n, m; cin >> n >> m;
    int attemps[m][2];
    double prob [m];
    double isAlive [n];
    
    //Inicializa
    for (int i = 0; i < n; i++)
    {
        isAlive[i]=1;
    }

    //Lee
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>attemps[i][j];
        }
        cin>>prob[i];
    }

    for (int i = 0; i < m; i++)
    {
        int killer=(attemps[i][0]-1), killed=(attemps[i][1]-1);
        if( isAlive[killer]>0){
            // cout<<"killed:"<<killed<<"\n";
            // cout<<prob[i]<<"\n";
            // cout<<"killer:"<<killer<<"\n\n";
            // cout<<"isAlive["<<killed<<"]: "<<isAlive[killed]<<"\n";
            // cout<<"isAlive["<<killer<<"]: "<<isAlive[killer]<<"\n";
            isAlive[killed]= (1-(isAlive[killer])*(prob[i]) );
            // cout<<"LO MATA!"<<"\n";
            // cout<<"isAlive["<<killed<<"]: "<<isAlive[killed]<<"\n";
            // cout<<"isAlive["<<killer<<"]: "<<isAlive[killer]<<"\n\n\n\n";
        }
    }
    // cout<<"ESTE: "<<isAlive[1];

    for (int i = 0; i < n; i++)
    {
        cout<<isAlive[i]<<"\n";
    }
    
    


    

    return 0;
}