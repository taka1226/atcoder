#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//const
const ll MAX_N = 2000005;
//input
ll a, N;
queue<ll> Q;
ll d[MAX_N];
int main(){
    cin >> a >> N;
    ll M = 1;
    while (M <= N) M *= 10;

    for (ll i=0;i<MAX_N;i++){
        d[i] = -1;
    }
    d[1] = 0;
    Q.push(1);
    while (!Q.empty()){
        ll u = Q.front();Q.pop();

        ll op1 = u * a;
        if (op1 < M && d[op1] == -1){
            d[op1] = d[u] + 1;
            Q.push(op1);
        }

        if (u >= 10 && u % 10 != 0){
            ll top = u / 10;
            ll low = u % 10;
            string u_str = to_string(u);
            ll op2 = top;
            op2 += pow(10, u_str.size() - 1) * low;
            if (op2 < M && d[op2] == -1){
                d[op2] = d[u] + 1;
                Q.push(op2);
            }
        }
    }
    cout << d[N] << endl;
    return 0;
}
