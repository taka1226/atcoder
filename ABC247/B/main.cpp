#include<bits/stdc++.h>
using namespace std;
//const
const int MAX_N = 105;
//input
int N;


int main(){
    cin >> N;
    vector<string> S(N+1);
    vector<string> T(N+1);
    for (int i=0;i<N;i++){
        cin >> S[i] >> T[i];
    }
    for (int i=0;i<N;i++){
        bool flg1 = false;
        for (int j=0;j<N;j++){
            if (i != j){
                if (S[i] == S[j] || S[i] == T[j]) flg1 = true;
            }
        }
        bool flg2 = false;
        for (int j=0;j<N;j++){
            if (i != j){
                if (T[i] == S[j] || T[i] == T[j]) flg2 = true;
            }
        }

        if (flg1 && flg2){
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}
