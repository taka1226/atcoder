#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//input
ll t;

ll f(ll x){
    return x * x + 2 * x + 3;
}
int main(){
    cin >> t;
    cout << f(f(f(t) + t) + f(f(t))) << endl;
    return 0;
}
