#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//const
const int MAX_N = 1e5 + 5;

//input
int N, A[MAX_N];

int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> A[i];
    }

    int r = 1;
    ll res = 0;
    for (int l=0;l<N;l++){
        r = l + 1;
        while (r < N && (A[r - 1] < A[r])){
            r++;
        }
        res += r - l;
    }

    cout << res << endl;
    return 0;
}
