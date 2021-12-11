#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
//const
const int MAX_N = 100005;
//input
int N, M;
int A[MAX_N];
bool ans[MAX_N];

vector<ll> PrimeFactorization(ll n){
    vector<ll> ans;
    ll m = n;
    for (int i=2;i*i<=n;i++){
        ll index = 0;
        for (;;){
            if (m % i == 0){
                index++;
                m = m / i;
            }else{
                break;
            }
        }
        if (index > 0){
            ans.push_back(i);
        }
    }
    if (m != 1)ans.push_back(m);
    return ans;
}

void debug_V(vector<ll> x){
    for (auto& p : x){
        cout << p << " ";
    }
    cout << endl;
}

int main(){
    cin >> N >> M;
    for (int i=0;i<N;i++){
        cin >> A[i];
    }

    //初期化
    for (int i=1;i<=M;i++){
        ans[i] = false;
    }

    for (int i=0;i<N;i++){
        vector<ll> V;
        V = PrimeFactorization(A[i]);

        for (auto p : V){
            if (!ans[p]){
                for (ll i = p;i <= M;i += p){
                    ans[i] = true;
                }
            }
        }
    }

    int res = 0;
    for (int i=1;i<=M;i++){
        if (!ans[i]){
            res++;
        }
    }
    cout << res << endl;
    for (int i=1;i<=M;i++){
        if (!ans[i]){
            cout << i << endl;
        }
    }
    return 0;
}
