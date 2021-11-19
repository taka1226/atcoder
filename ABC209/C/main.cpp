#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//const
const int MAX_N = 200005;

//input
int N;
ll C[MAX_N];

int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> C[i];
    }

    sort(C, C+N);
    ll ans = 1;
    for (int i=0;i<N;i++){
        //ans = (ans * (C[i] - i)) % (ll)(1e9 + 7);
        ans = (ans * (C[i] - i)) % (ll)(1e9 + 7);
    }

    cout << ans << endl;
    return 0;
}
