#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
set<ll> st;

int main(){
    for (int i=0;i<10;i++){
        st.emplace(i);
    }

    auto iter = st.lower_bound(3);
    auto iter1 = st.begin();
    cout << *iter1 << endl;
    return 0;
}
