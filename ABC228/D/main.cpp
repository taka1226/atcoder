#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//const
const int MAX_Q = 200005;
const ll N = pow(2, 20);

//input
int Q, t[MAX_Q];
ll x[MAX_Q];
ll A[N];
vector<ll> ans;

int main(){
    cin >> Q;
    for (int i=0;i<Q;i++){
        cin >> t[i] >> x[i];
    }

    for (int i=0;i<N;i++){
        A[i] = -1;
    }

    for (int i=0;i<Q;i++){
        if (t[i] == 1){
            ll j = x[i] % N;
            while (A[j] != -1){
                j++;
            }
            A[j] = x[i];

        }else if (t[i] == 2){
            ll l = x[i] % N;
            cout << A[l] << endl;
        }

    }

    // for (auto& i: ans){
    //     cout << i << endl;
    // }
    return 0;
}
