#include<bits/stdc++.h>
using namespace std;

int N, K;
vector<int> V;
set<int>st;
int main(){
    cin >> N >> K;
    for (int i=0;i<N;i++){
        int P;cin >> P;
        if (i < K){
            st.insert(P);
            if (i == K - 1){
                cout << *st.begin() << endl;
            }
        }else{
            if (*st.begin() < P){
                st.erase(*st.begin());
                st.insert(P);
            }
            cout << *st.begin() << endl;
        }
    }

    return 0;
}
