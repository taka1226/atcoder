#include<bits/stdc++.h>
using namespace std;
using ll = int64_t;

//inputs
ll X, A, D, N;

int main(){
    cin >> X >> A >> D >> N;

    ll min_s = min(A, A + D * (N - 1));
    ll max_s = max(A, A + D * (N - 1));
    if (D < 0){
        D *= -1;
    }
    if (min_s <= X && X <= max_s){
        cout << min((X - A) % D, D - (X - A) % D) << endl;
    }else if (X < min_s){
        cout << min_s - X << endl;
    }else{
        cout << X - max_s << endl;
    }
    

    return 0;
}
