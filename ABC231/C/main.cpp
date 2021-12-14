#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//const
const ll MAX_N = 200005;

//input
int N, Q;
ll x[MAX_N];

int main(){
    cin >> N >> Q;
    vector<ll>V(N);
    for (int i=0;i<N;i++){
        ll a;cin >> a;
        V[i] = a;
    }
    for (int i=0;i<Q;i++){
        cin >> x[i];
    }
    sort(V.begin(), V.end());
    for (int i=0;i<Q;i++){
        cout << V.end() - lower_bound(V.begin(), V.end(), x[i]) << endl;
    }
    return 0;
}
