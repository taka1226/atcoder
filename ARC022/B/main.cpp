#include<bits/stdc++.h>
using namespace std;

//const
const int MAX_N = 1e5 + 5;

//input
int N;
int A[MAX_N];
set<int> st;

int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> A[i];
    }

    int r = 0;
    int ans = 0;
    int st_size;
    for (int l=0;l<N;l++){
        while (r < N && (st.find(A[r]) == st.end() || r <= l)){
            st.insert(A[r++]);
        }
        ans = max(r - l, ans);

        st.erase(A[l]);
    }

    cout << ans << endl;
    return 0;
}
