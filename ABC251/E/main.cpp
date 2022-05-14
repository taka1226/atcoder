#include<bits/stdc++.h>
using namespace std;
using ll = int64_t;

//const
const int MAX_N = 300005;

//input
int N;
ll A[MAX_N];

int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> A[i];
    }


    if (N % 2 == 0){
        ll ans1 = 0;
        for (int i=0;i<N;i+=2){
            ans1 += A[i];
        }
        ll ans2 = 0;
        for (int i=1;i<N;i+=2){
            ans2 += A[i];
        }

        cout << min(ans1, ans2) << endl;
    }else if (N % 2 == 1){
        ll ans1 = 0;
        ll ans2 = 0;
        ll ans3 = 0;
        ll ans4 = 0;
        ll ans5 = 0;

        vector<ll> middle;
        for (int i=2;i<N-1;i+=2){
            middle.push_back(i);
        }

        vector<ll> tmp1 = middle;
        tmp1.push_back(0);
        tmp1.push_back(N-2);
        ll s1 = 0;
        for (auto u : tmp1){
            s1 += A[u];
        }

        vector<ll> tmp2 = middle;
        tmp2.push_back(N-1);
        tmp2.push_back(1);
        ll s2 = 0;
        for (auto u : tmp2){
            s2 += A[u];
        }

        vector<ll> tmp3 = middle;
        tmp3.push_back(0);
        tmp3.push_back(N-1);
        ll s3 = 0;
        for (auto u : tmp3){
            s3 += A[u];
        }

        vector<ll> middle2;
        for (int i=1;i<N;i+=2){
            middle2.push_back(i);
        }

        vector<ll> tmp4 = middle2;
        tmp4.push_back(0);
        ll s4 = 0;
        for (auto u : tmp4){
            s4 += A[u];
        }

        vector<ll> tmp5 = middle2;
        tmp5.push_back(N-1);
        ll s5 = 0;
        for (auto u : tmp5){
            s5 += A[u];
        }

        cout << min(min(min(min(s1, s2), s3), s4), s5) << endl;;
    }
    return 0;
}
