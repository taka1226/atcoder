#include<bits/stdc++.h>
using namespace std;
using ll = int64_t;

//const
const int MAX_N = 200005;

int N;
int A[MAX_N];

struct threesom{
    int a;
    int b;
    int c;
};

vector<threesom> DivisorEnum(int n){
    vector<threesom> res;
    for (int i=1;i*i<=n;i++){
        if (n % i == 0){
            threesom thr;
            if (n / i > i){
                thr.a = n;
                thr.b = i;
                thr.c = n / i;
                res.emplace_back(thr);
            }else{
                thr.a = n;
                thr.b = i;
                thr.c = i;
                res.emplace_back(thr);
            }
        }
    }
    return res;
}

int main(){
    cin >> N;
    set<int> st;
    for (int i=0;i<N;i++){
        int v;cin >> v;
        st.insert(v);
        A[v]++;
    }

    ll ans = 0;
    for (auto u : st){
        auto ss = DivisorEnum(u);
        for(auto t : ss){
            if (t.b == t.c){
                ans += (ll)A[t.a] * (ll)A[t.b] * (ll)A[t.c];
            }else{
                ans += 2LL * (ll)A[t.a] * (ll)A[t.b] * (ll)A[t.c];
            }
        }
    }

    cout << ans << endl;


    return 0;
}
