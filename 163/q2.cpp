#include<iostream>

using namespace std;



int main(){
  int N, M;
  int a;
  int ans=0;
  cin >> N >> M;
  for (int i=0;i<M;i++){
    cin >> a;
    N = N - a;
    if (N < 0){
      ans = 1;
      break;
    }
  }
  if (ans==1){
    cout << -1 << endl;
  }else{
    cout << N << endl;
  }
}
