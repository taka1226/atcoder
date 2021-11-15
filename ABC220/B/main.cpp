#include<bits/stdc++.h>
using namespace std;

int K;
typedef long long ll;
string A, B;

//K進法で表されているnを10進法に直す
ll toDecimal(int K, int n){
    int ans = 0;
    int i = 0; //指数
    while(1){
        int reminder = n % 10;
        ans += pow(K, i) * reminder;
        i++;
        n = n / 10;
        if (n == 0)break;
    }

    return ans;
}

// K進法で表されているn(string)を10進法に直す
ll f(int K, string n){
    ll ans = 0;
    for (char x:n){
        ans *= K;
        ans += x - '0';
    }

    return ans;
}

int main(){
    cin >> K;
    cin >> A >> B;

    ll res = f(K, A) * f(K, B);
    cout << res << endl;

    return 0;
}
