#include<iostream>
using namespace std;
#define rep(i, n) for (int i=1;i <= (int)n;i++)
typedef long long ll;
ll a, b , c, k;
ll x, y, z;
ll total;

int main(){
  cin >> a >> b >> c >> k;
  x = a;
  y = 0;
  z = -c;
  total = 0;
  if (a > k){
    total = total + k;
    cout << total << endl;
  }else{
    k = k - a;
    total = total + x;
    if (b > k){
      cout << total << endl;
    }else{
      k = k - b;
      if (c > k){
        total = total - k;
        cout << total << endl;
      }else{
        total = total - c;
        cout << total << endl;
      }
    }
  }

  return 0;
}
