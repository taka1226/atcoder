#include<iostream>

using namespace std;
long n;
long long k;
long A[200001];
int B[200001];
long C[200001];

void print(){
  for (int i=1;i<=n;i++){
    cout << A[i] << " ";
  }
  cout << endl;
}

long visit(long now_place){
  if (B[now_place] == 0){
    B[now_place] += 1;
    long next_place = A[now_place];
    return next_place;
  }else{
    return -1;
  }
}

int main(){
  cin >> n >> k;
  for (int i=1;i<=n;i++){
    cin >> A[i];
  }

  long now_place = 1;
  long roop_start = 0;
  long roop_end = 0;
  while (1){
    roop_end++;
    C[roop_end] = now_place;
    long past_place = now_place;
    now_place = visit(now_place);
    if (now_place == -1){
      for (int i=1;i<=roop_end;i++){
        if (C[i] == past_place){
          roop_start = i;
          break;
        }
      }
      break;
    }
  }
  long roop_length = roop_end - roop_start;
  if (roop_length <= k){
    long s = (k - (roop_start - 1)) % (roop_end - roop_start);
    long now=C[roop_start];
    while (s > 0){
      s--;
      now = A[now];
    }
    cout << now << endl;
  }else{
    long start = 1;
    while (k > 0){
      k--;
      start = A[start];
    }
    cout << start << endl;
  }








}
