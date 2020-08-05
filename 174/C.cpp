////
//// Created by TakahiroYamaji on 2020/08/02.
////
//#include<iostream>
//#include<cmath>
//using namespace std;
//typedef long long ll;
//ll K;
//
//ll super_pow(ll x, ll n, ll mod){
//   ll res = 1;
//   while (n > 0){
//       if (n & 1) res = res * x % mod;
//       x = x * x % mod;
//       n >>= 1;
//   }
//   return res;
//}
//
////ll calc(ll k){
////    ll s = 0;
////    for (ll i=0;i<k;i++){
////        s += 7 * pow(10, i);
////        if (s % K == 0){
////
////        }
////    }
////}
//int main(){
//    cin >> K;
//    //iは桁数
//    ll s = 0;
//    int flg = 0;
//    for (int i=0;i<K;i++){
//        s += 7 * super_pow(10, i, K);
//        if (s % K == 0){
//            cout << i + 1 << endl;
//            flg = 1;
//            break;
//        }
//    }
//    if (flg == 0){
//        cout << -1 << endl;
//    }
//    //cout << super_pow(2, 6, 3) << endl;
//}
//
