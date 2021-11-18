#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//const
const ll INF = 1000000005;

//input
int N, M;
vector<ll> A;
vector<ll> B;

int main(){
    cin >> N >> M;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        A.push_back(a);
    }
    for (int i=0;i<M;i++){
        ll b;
        cin >> b;
        B.push_back(b);
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    ll ans = INF;
    for (int i=0;i<N;i++){
        int order = lower_bound(B.begin(),B.end(), A[i]) - B.begin();

        if (order == M){
            ans = min(abs(B[order - 1] - A[i]), ans);
        }else if (order == 0){
            ans = min(abs(B[order] - A[i]), ans);
        }else{
            ans = min(min(abs(B[order - 1] - A[i]), abs(B[order] - A[i])), ans);
        }
    }

    cout << ans << endl;


    return 0;
}
