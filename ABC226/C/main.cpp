#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//const
const int MAX_N = 200005;

//input
int N;
ll T[MAX_N];
vector<int> A[MAX_N];
set<int> st;
ll ans;

void solve(int a){
    if (st.find(a) == st.end()){
        st.emplace(a);
        if (A[a].size() == 0) return;
        for (auto i : A[a]){
            solve(i);
        }
    }
    return;
}

int main(){
    cin >> N;
    for (int i=1;i<=N;i++){
        int k;
        cin >> T[i] >> k;
        for (int j=1;j<=k;j++){
            int a;
            cin >> a;
            A[i].push_back(a);
        }
    }

    solve(N);
    ans = 0;
    for (auto& i : st){
        ans += T[i];
    }

    cout << ans << endl;


    return 0;
}
