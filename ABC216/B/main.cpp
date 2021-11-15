#include<bits/stdc++.h>
using namespace std;

//input
int N;
vector<string> S;
vector<string> T;

int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        string s, t;
        cin >> s >> t;
        S.push_back(s);
        T.push_back(t);
    }

    for (int i=0;i<N;i++){
        for (int j=i+1;j<N;j++){
            if (S[i] == S[j] && T[i] == T[j]){
                printf("Yes\n");
                return 0;
            }
        }
    }

    printf("No\n");
    return 0;
}
