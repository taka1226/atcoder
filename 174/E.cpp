////
//// Created by TakahiroYamaji on 2020/08/02.
////
#include<iostream>
#include<cmath>
typedef long long ll;
int N;
ll K;
ll A[2000000];
using namespace std;
bool C(double d){
   ll res = 0;
   for (int i=0;i<N;i++){
       ll item = A[i] / d;
       res += item;
       double rest = A[i] - d * item;
       //std::cout << rest << endl;
       if (rest != 0){
           res++;
       }
   }
   //std::cout << res << endl;
   return res <= N+K;
}

int main(){
   cin >> N >> K;
   for (int i=0;i<N;i++){
       cin >> A[i];
   }
   double start = 0;
   double end = 1e10;
   for (int i=0;i<100;i++){
       //std::cout << start << " " << end << endl;
       double mid = (start + end) / 2;
       if (C(mid)) end = mid;
       else start = mid;
   }
   ll ans = ceil(start);
   cout << ans << endl;
}

