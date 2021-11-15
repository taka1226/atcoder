#include<iostream>
using namespace std;

int main(){
  int N;
  char S[4001];
  int A[4001];
  cin >> N;
  cin >> S;
  int cnt = 0;
  for (int i=0;i<N;i++){
    char s = S[i];
    for (int j=i;j<N;j++){
      char t = S[j];
      if (s==t)continue;
      for (int k=j;k<N;k++){
        char u = S[k];
        if (s==u || t==u)continue;
        else if (j-i == k-j)continue;
        cnt++;
      }
    }
  }
  cout << cnt << endl;
}
