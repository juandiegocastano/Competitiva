#include <bits/stdc++.h>

using namespace std;

int main() {

    int year; cin>>year;

    set<int> anos_validos;
    anos_validos.insert(2018);

    int mes_actual=4, ano_actual=2018;

    for (int i = 0; i <= 10000; i++)
    {
        mes_actual+=26;
        while(mes_actual>12){
            mes_actual-=12;
            ano_actual++;
        }

        anos_validos.insert(ano_actual);

    }

    if(anos_validos.count(year)) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    


    return 0;
}