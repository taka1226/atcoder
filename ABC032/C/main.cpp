#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//const
const int MAX_N = 1e5 + 5;

//input
int N;
ll K;
ll S[MAX_N];

int main(){
    cin >> N >> K;
    for (int i=0;i<N;i++){
        cin >> S[i];
    }

    for (int i=0;i<N;i++){
        if (S[i] == 0){
            cout << N << endl;
            return 0;
        }
    }

    int r = 0;
    ll product = 1;
    int res = 0;
    for (int l=0;l<N;l++){
        while (r < N && product * S[r] <= K){
            product *= S[r++];
        }
        res = max(res, r - l);
        if (l == r) r++;
        else product /= S[l];
    }

    cout << res << endl;
    return 0;
}
