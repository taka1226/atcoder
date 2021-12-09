#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAX_N = 200005;

//input
ll L;
int Q;
int c[MAX_N], x[MAX_N];
vector<ll> V;

void debug_V(){
    for (auto& i: V){
        cout << i << " ";
    }
    cout << endl;
}


int main(){
    cin >> L >> Q;
    for (int i=0;i<Q;i++){
        cin >> c[i] >> x[i];
    }

    V.push_back(0);
    V.push_back(L);
    for (int i=0;i<Q;i++){
        if (c[i] == 1){
            auto iter = lower_bound(V.begin(), V.end(), x[i]);
            V.insert(iter, x[i]);
        }else if (c[i] == 2){
            int index = lower_bound(V.begin(), V.end(), x[i]) - V.begin();
            cout << V[index] - V[index - 1] << endl;
        }
    }
    return 0;
}
