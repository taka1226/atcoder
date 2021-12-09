#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAX_N = 200005;

//input
ll L;
int Q;
int c[MAX_N], x[MAX_N];
set<ll> st;

int main(){
    cin >> L >> Q;
    for (int i=0;i<Q;i++){
        cin >> c[i] >> x[i];
    }

    st.insert(0);
    st.insert(L);
    for (int i=0;i<Q;i++){
        if (c[i] == 1){
            st.insert(x[i]);
        }else if (c[i] == 2){
            auto iter = st.lower_bound(x[i]);
            cout << *iter - *prev(iter) << endl;
        }
    }
    return 0;
}
