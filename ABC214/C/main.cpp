#include<bits/stdc++.h>
using namespace std;

//const
const int MAX_N = 200005;

typedef long long ll;

//input
int N;
ll S[MAX_N], T[MAX_N];
ll ans[MAX_N];

int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> S[i];
    }
    for (int i=0;i<N;i++){
        cin >> T[i];
    }

    for (int i=0;i<100;i++){
        ans[0] = min(ans[N - 1] + S[N - 1], T[0]);
        for (int i=1;i<N;i++){
            ans[i] = min(ans[i - 1] + S[i - 1], T[i]);
        }
    }

    for (int i=0;i<N;i++){
        cout << ans[i] << endl;
    }
    return 0;
}
