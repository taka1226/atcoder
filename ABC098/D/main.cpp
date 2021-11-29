#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//const
const int MAX_N = 200005;

//input
int N;
ll A[MAX_N];

int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> A[i];
    }

    int r = 0;
    ll ans = 0;
    ll sum = 0;
    ll my_xor = 0;
    for (int l=0;l<N;l++){
        while (r < N && ((my_xor ^ A[r]) == sum + A[r] || r <= l)){
            my_xor ^= A[r];
            sum += A[r];
            r++;
        }
        ans += r - l;

        my_xor ^= A[l];
        sum -= A[l];
    }

    cout << ans << endl;
    return 0;
}
