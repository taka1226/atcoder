#include<bits/stdc++.h>
using namespace std;
//const
const int MAX_N = 105;

//inputs
int N, K;
int A[MAX_N];
int B[MAX_N];

int main(){
    cin >> N >> K;
    for (int i=0;i<N;i++){
        cin >> A[i];
    }
    for (int i=0;i<K;i++){
        cin >> B[i];
        B[i]--;
    }

    int max_a = -1;
    vector<int> ans;
    for (int i=0;i<N;i++){
        if (max_a < A[i]){
            max_a = A[i];
            vector<int> ini{i};
            ans = ini;
        }else if (max_a == A[i]){
            ans.push_back(i);
        }
    }

    for (int i=0;i<K;i++){
        int b = B[i];
        if (find(ans.begin(), ans.end(), b) != ans.end()){
            printf("Yes\n");
            return 0;
        }
    }

    printf("No\n");


    return 0;
}
