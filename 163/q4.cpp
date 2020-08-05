#include<iostream>
#include<cmath>
using namespace std;
typedef unsigned long long ullong;
int n, k;

ullong count_tal(ullong u){
  ullong init = 1 * (u-1) * u / 2;
  ullong end = 1 * (2 * n - u + 1) * u / 2;
  return end - init + 1;
}

int main(){
  cin >> n >> k;
  //cout << ans << endl;
  ullong total = 0;
  for (ullong i=k;i<=n+1;i++){
    ullong ans = count_tal(i);
    total  += ans;
    total = total % 1000000007;
  }
  cout << total << endl;
}
