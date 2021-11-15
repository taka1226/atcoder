#include<iostream>
#include <cmath>
using namespace std;

int main(){
  long long N;
  cin >> N;
  long long total = 0;
  for (long long i=0;i<N;i++){
    if (i % 15 == 0)continue;
    else if (i % 3 == 0)continue;
    else if (i % 5 == 0)continue;
    else{
      total += i;
    }
  }
  cout << total << endl;

}
