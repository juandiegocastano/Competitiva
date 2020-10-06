#include <bits/stdc++.h>
using namespace std;

int main(){

    bool termino = false;
    char prev, actual;
    int moves=0;
    scanf("%c",&prev);
    while(true){
        scanf("%c",&actual);
        // printf("%i ",actual);
        int normPrev=prev-97, normActual=actual-97;
        printf("normAct: %i ",normActual);
        printf("normPrev %i ",normPrev);
        if(normPrev<=normActual){
            if(abs(normActual-normPrev)<= abs(25-(normActual-normPrev)) ){
                moves+= abs(normActual-normPrev);
            } else moves+= abs(25-(normActual-normPrev));
        } else {
            if(abs(normPrev-normActual)<= abs(25-(normPrev-normActual))) {
                moves+= abs(normPrev-normActual);
            } else moves+= abs(25-(normPrev-normActual));
        }
        prev=actual;
    printf("%i", moves);
    }

    return 0;
}