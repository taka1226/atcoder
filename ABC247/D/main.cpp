#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int Q;
queue<pair<ll, ll>> que;
int main(){
    cin >> Q;
    for (int i=0;i<Q;i++){
        int q;cin >> q;
        if (q == 1){
            ll x, c;cin >> x >> c;
            que.push(make_pair(x, c));
        }else if (q == 2){
            ll c;cin >> c;
            ll total = 0;
            while (c > 0){
                auto& u = que.front();
                if (u.second <= c){
                    c -= u.second;
                    total += u.first * u.second;
                    que.pop();
                }else{
                    //u.second の個数を減らすだけ
                    u.second -= c;
                    total += u.first * c;
                    c = 0;
                }
            }
            cout << total << endl;
        }
    }
    return 0;
}
