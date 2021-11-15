#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//input
ll N;

int main(){
    cin >> N;
    ll res = 1;
    int ans;
    for (int i=0;i<100;i++){
        if (res <= N){
            res *= 2;
            ans = i;
        }else{
            break;
        }
    }

    cout << ans << endl;
    return 0;
}
