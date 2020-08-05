#include<iostream>
#include<algorithm>
using namespace std;
#define rep(i, n) for (int i=1;i <= (int)n;i++)
long A[13][13];
long T[13]; //ここに書いていく
int n, m;
long x;

 seek(int i, int num_this_array, int apply){ // iは1からn
  if (apply == 1){
    rep(j, num_this_array){
      T[j] += A[i][j];
    }
  }
  int flg = 0;
  for (int j=2;j<=num_this_array;j++){
    if (T[j] < x){
      flg = 1;
    }
  }
  if (flg == 0){
    return T[1];
  }
}

int search(){

}

int main(){
  cin >> n >> m >> x;
  rep(i, n){
    rep(j, m+1){
      cin >> A[i][j];
    }
  }

  return 0;
}
