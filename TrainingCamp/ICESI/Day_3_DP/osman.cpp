#include<bits/stdc++.h>

#define endl '\n'

using namespace std;
const int N = 6e5+20;
const int oo = 1e9;

int coin[N];
int memo[4002][4002];
int f(int x, int i) {
  if(x < 0) return oo;
  if(i == 0) return (x == 0 ? 0 : oo);
  if(memo[x][i] != -1) return memo[x][i];
  return memo[x][i] = min( f(x-coin[i], i)+1, f(x, i-1) );
}

int main(){
  freopen("input.txt", "r", stdin);

  int n;
  cin >> n;

  /// Esta indexado desde 1
  for(int i = 1; i <= n; i++) cin >> coin[i];

  int X; cin >> X;
  /// cuando i == 0, es el caso de que no tenemos monedas para usar
  for(int i = 0; i <= X; i++) memo[0][i] = oo;
  memo[0][0] = 0; /// solo se puede cuando tengo 0 por cambiar, de resto es oo
  for(int i = 1; i <= n; i++) {
    for(int x = 0; x <= X; x++) {
      memo[i][x] = oo;
      if(x-coin[i] >= 0) {/// usar la moneda
        memo[i][x] = min(memo[i][x], memo[i][ x-coin[i] ]+1);
      }
      if(i-1 >= 0) {
        memo[i][x] = min(memo[i][x], memo[(i-1)][x]);
      }
    }
  }
  cout << memo[n][X] << endl;

  /** Aca esta la version con memoria optimizada (falta cambiar arriba en definicion de memo)**/
  for(int i = 0; i <= X; i++) memo[0][i] = oo;
  memo[0][0] = 0; /// solo se puede cuando tengo 0 por cambiar, de resto es oo
  for(int i = 1; i <= n; i++) {
    for(int x = 0; x <= X; x++) {
      memo[i&1][x] = oo;
      if(x-coin[i] >= 0) {/// usar la moneda
        memo[i&1][x] = min(memo[i&1][x], memo[i&1][ x-coin[i] ]+1);
      }
      if(i-1 >= 0) {
        memo[i&1][x] = min(memo[i&1][x], memo[(i-1)&1][x]);
      }
    }
  }
  cout << memo[n&1][X] << endl;
}