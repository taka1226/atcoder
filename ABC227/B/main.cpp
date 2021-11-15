#include<bits/stdc++.h>
using namespace std;

//const
const int MAX_N = 21;

int N;
int S[MAX_N];

bool is_possible(int s){
    for (int a=1;a<=1000;a++){
        for (int b=1;b<=1000;b++){
            int square = 4 * a * b + 3 * a + 3 * b;
            if (square == s){
                return true;
            }
            if (square > s) continue;
        }
    }
    return false;
}

int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> S[i];
    }

    int ans = 0;
    for (int i=0;i<N;i++){
        if (!is_possible(S[i])){
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
