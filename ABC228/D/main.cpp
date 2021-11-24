#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//const
const int MAX_Q = 200005;
//const ll N = pow(2, 20);
const ll N = 1LL << 20;

//input
int Q, t[MAX_Q];
ll x[MAX_Q];
ll A[N];
vector<ll> ans;
set<ll> st;

int main(){
    cin >> Q;
    for (int i=0;i<Q;i++){
        cin >> t[i] >> x[i];
    }

    for (int i=0;i<N;i++){
        A[i] = -1;
    }

    for (int i=0;i<N;i++){
        st.emplace(i);
    }

    for (int i=0;i<Q;i++){
        if (t[i] == 1){
            ll j = x[i] % N;
            auto new_j = st.lower_bound(j);
            if (new_j == st.end()){
                new_j = st.begin();
            }
            A[*new_j] = x[i];
            st.erase(*new_j);

        }else if (t[i] == 2){
            ll l = x[i] % N;
            ans.push_back(A[l]);
        }

    }

    for (auto& i: ans){
        cout << i << endl;
    }
    return 0;
}
