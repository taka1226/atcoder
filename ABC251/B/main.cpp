#include<bits/stdc++.h>
using namespace std;
//const
const int MAX_N = 305;

//input
int N, W;
int A[MAX_N];

int main(){
    cin >> N >> W;
    for (int i=0;i<N;i++){
        cin >> A[i];
    }

    set<int> ans;

    for (int i=0;i<N;i++){
        if (A[i] <= W){
            ans.insert(A[i]);
        }
    }

    for (int i=0;i<N;i++){
        for (int j=i+1;j<N;j++){
            if (A[i] + A[j] <= W){
                ans.insert(A[i] + A[j]);
            }
        }
    }

    for (int i=0;i<N;i++){
        for (int j=i+1;j<N;j++){
            for (int k=j+1;k<N;k++){
                if (A[i] + A[j] + A[k] <= W){
                    ans.insert(A[i] + A[j] + A[k]);
                }
            }
        }
    }

    cout << ans.size() << endl;
    return 0;
}
