#include<bits/stdc++.h>
using namespace std;
//const
const int MAX_N = 200000 + 5;
//inputs
int N;
int X[MAX_N];
int Y[MAX_N];
string S;
map<int, set<int>> mpL;
map<int, set<int>> mpR;

int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> X[i] >> Y[i];
    }
    cin >> S;
    for (int i=0;i<N;i++){
        int vec;
        if (S[i] == 'L'){
            vec = -1 * X[i];
            mpL[Y[i]].insert(vec);
        }else{
            vec = X[i];
            mpR[Y[i]].insert(vec);
        }
    }

    for (auto key : mpL){
        int k = key.first;
        if (mpR.find(k) != mpR.end()){
            int l_min = *mpL[k].begin();
            int r_min = *mpR[k].begin();

            if (l_min + r_min < 0){
                printf("Yes\n");
                return 0;
            }
        }
    }

    printf("No\n");
    return 0;
}
