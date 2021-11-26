#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//const
const int MAX_N = 505;

//input
typedef pair<ll, ll> Point;
Point P[MAX_N];
int N;
set<Point> st;

//functions
bool is_parallel(Point vec);
ll my_gcd(ll a, ll b);

void is_parallel(){
    for (int i=0;i<N;i++){
        for (int j=i+1;j<N;j++){
            ll vx1 = P[j].first - P[i].first;
            ll vy1 = P[j].second - P[i].second;
            ll d;
            if (vx1 == 0){
                d = vy1;
            }else if (vy1 == 0){
                d = vx1;
            }else{
                d = my_gcd(vx1, vy1);
            }

            Point v(vx1 / d, vy1 / d);
            if (st.find(v) == st.end()){
                st.emplace(v);
            }
        }
    }
}

//cでもc++でも
ll my_gcd(ll a, ll b){
  if(a%b == 0){
    return b;
  }else{
    return my_gcd(b, a%b);
  }
}

int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> P[i].first >> P[i].second;
    }

    is_parallel();
    cout << 2 * st.size() << endl;
    return 0;
}
