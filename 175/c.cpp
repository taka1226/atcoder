//
// Created by TakahiroYamaji on 2020/08/15.
//
#include<iostream>
#include<algorithm>
typedef long long int ll;
ll x, k, d;

int main(){
    std::cin >> x >> k >> d;

    ll fir = x + k * d;
    //std::cout << k * d << std::endl;
    //std::cout << fir << std::endl;
    ll res = fir / (d * 2);
    //std::cout << res << std::endl;
    if (x - k * d > 0){
        std::cout << x - k * d << std::endl;

    }else{
        //std::cout << res << std::endl;
        ll ans_1 = abs(fir - res * d * 2);
        ll ans_2 = abs(fir - (res+1) * 2 * d);
        std::cout << std::min(ans_1, ans_2) << std::endl;
    }



}
