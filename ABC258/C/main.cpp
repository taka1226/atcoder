#include<bits/stdc++.h>
using namespace std;

//inputs
int N, Q;
string S;

int main(){
    cin >> N >> Q;
    cin >> S;

    int p = 0;
    while (Q--){
        int t, x;cin >> t >> x;
        if (t == 1){
            p -= x;
            p += N;
            p %= N;
        }else if (t == 2){
            int s = p + (x - 1);
            s %= N;
            cout << S[s] << endl;
        }
    }
    return 0;
}
