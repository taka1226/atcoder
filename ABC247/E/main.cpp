#include<bits/stdc++.h>
using namespace std;
using ll = int64_t;

//const
const int MAX_N = 200005;
//input
int N, X, Y;
int A[MAX_N];

ll calc(vector<int> B){
    int i = 0;
    int j = 0;
    int cntX = 0;
    int cntY = 0;
    ll res = 0;
    while (i < B.size()){
        while (j < B.size() && (cntX == 0 || cntY == 0)){
            if (B[j] == X){
                cntX ++;
            }
            if (B[j] == Y){
                cntY ++;
            }
            j++;
        }
        if (cntX > 0 && cntY > 0){
            res += (ll)(B.size() + 1 - j);
        }
        if (B[i] == X) cntX--;
        if (B[i] == Y) cntY--;
        i++;
    }
    return res;
}
int main(){
    cin >> N >> X >> Y;
    for (int i=0;i<N;i++){
        cin >> A[i];
    }

    int i = 0;
    ll ans = 0;
    while (i < N){
        vector<int> B;
        while (i < N && Y <= A[i] && A[i] <= X){
            B.push_back(A[i]);
            i += 1;
        }
        if (B.size() != 0){
            ans += calc(B);
        }else{
            i++;
        }
    }
    cout << ans << endl;
    return 0;
}
