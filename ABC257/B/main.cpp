#include<bits/stdc++.h>
using namespace std;
//const
const int MAX_K = 205;
const int MAX_Q = 1005;
//inputs
int n, k, q;
int A[MAX_K];
int l;
map<int, int> mp;

int main(){
    cin >> n >> k >> q;
    for (int i=1;i<=k;i++){
        cin >> A[i];
        mp[i] = A[i];
    }
    for (int i=0;i<q;i++){
        cin >> l;
        if (mp[l] == n || mp[l+1] - mp[l] == 1){
            continue;
        }

        mp[l]++;
    }

    for (auto [x, y] : mp){
        if (y > 0){
            cout << y << endl;
        }
    }


    return 0;
}
