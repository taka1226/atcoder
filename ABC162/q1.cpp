#include<iostream>
#include<string>

using namespace std;

int main(){
  char N[4];
  cin >> N;
  int flg = 0;
  for (int i=0;i<3;i++){
    if (N[i] == '7'){
      flg = 1;
    }
  }
  if (flg == 0){
    cout << "No" << endl;
  }else{
    cout << "Yes" << endl;
  }
}
