#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


//input
int Q;
priority_queue<ll, vector<ll>, greater<ll>> que;
ll offset = 0;
vector<ll> ans;
int main(){
    cin >> Q;

    for (int i=0;i<Q;i++){
        int p;ll x;
        cin >> p;
        if (p == 1){
            cin >> x;
            que.push(x - offset);
        }else if (p == 2){
            cin >> x;
            offset += x;
        }else if (p == 3){
            ll top_q = que.top();
            que.pop();

            ans.push_back(top_q + offset);
        }
    }

    for (auto& p : ans){
        cout << p << endl;
    }
    return 0;
}
