#include<iostream>

using namespace std;
int A[200001];
int n;
int a;

int main(){
  cin >> n;
  for (int i=2;i<=n;i++){
    cin >> a;
    A[a]++;
  }
  for (int i=1;i<=n;i++){
    cout << A[i] << endl;
  }
}
