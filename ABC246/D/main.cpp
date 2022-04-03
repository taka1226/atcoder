#include<bits/stdc++.h>
using namespace std;

using ll = int64_t;

//inputs
ll N;

ll f(ll a, ll b){
    return a * a * a + a * a * b + a * b * b + b * b * b;
}
int main(){
    cin >> N;

    ll j = 1000000;
    ll X = 8e18;
    for (int i = 0; i <= 1000000; i++){
        while (f(i, j) >= N && j >= 0){
            X = min(X, f(i, j));
            j--;
        }
    }

    cout << X << endl;
    return 0;
}
