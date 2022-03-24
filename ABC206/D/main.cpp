#include<bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
using namespace atcoder;
//const
const int MAX_N = 200005;
//inputs
int N;
int A[MAX_N];
int main(){
    cin >> N;
    for (int i=1;i<=N;i++){
        cin >> A[i];
    }

    int n = 200005;
    dsu d(n);

    for (int i=1;i<=N;i++){
        d.merge(A[i], A[N+1-i]);
    }

    int sum = 0;
    for (int i=1;i<n;i++){
        if (i == d.leader(i)){
            sum += d.size(i) - 1;
        }
    }

    cout << sum << endl;

    return 0;
}
