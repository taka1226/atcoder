#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//const
const int MAX_N = 25;
//input
int N;
ll A[MAX_N];

//par[i] = i の後にしきりがある
bool par[MAX_N];
int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> A[i];
    }

    ll ans;
    ll min_ans = 1e15;
    for (int bit = 0;bit < (1<<N-1);bit++){
        ans = 0;
        ll tmp = 0;
        for (int i=0;i<N;i++){
            tmp |= A[i];
            if (bit & (1 << i)){
                ans ^= tmp;
                tmp = 0;
            }
        }

        ans ^= tmp;
        if (min_ans > ans){
            min_ans = ans;
        }
    }

    cout << min_ans << endl;

    return 0;
}
