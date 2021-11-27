#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//const
const int MAX_N = 300;
const ll INF = 1e10;

//input
int N;
ll X[MAX_N], Y[MAX_N];

ll my_gcd(ll a, ll b){
  if(a%b == 0){
    return b;
  }else{
    return gcd(b, a%b);
  }
}

bool is_parallel(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3){
    ll vx1, vy1, vx2, vy2;
    vx1 = x2 - x1;vy1 = y2 - y1;
    vx2 = x3 - x1;vy2 = y3 - y1;

    ll d = vx1 * vy2 - vx2 * vy1;
    return d == 0;
}

int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> X[i] >> Y[i];
    }

    ll ans = 0;
    for (int i=0;i<N;i++){
        for (int j=i+1;j<N;j++){
            for (int k=j+1;k<N;k++){
                if (!is_parallel(X[i], Y[i], X[j], Y[j], X[k], Y[k])){

                    ans++;
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}
