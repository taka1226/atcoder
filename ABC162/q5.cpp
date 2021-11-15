#include <iostream>
using namespace std;

int gcd(int x, int y) { return (x % y)? gcd(y, x % y): y; }

int gcd_3(int x, int y, int z){
  int d = gcd(x,y);
  return gcd(d, z);
}
int main() {
  int N;
  int k;
  cin >> N;
  cin >> k;
  int a = 0;
  for (int i=1;i<=N;i++){
    for (int j= 1;j<=N;j++){
      for (int k=1;k<=N;k++){
        a += gcd_3(i, j, k);
      }
    }
  }
  cout << a << endl;
  return 0;
}
