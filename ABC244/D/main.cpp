#include<bits/stdc++.h>
using namespace std;

//inputs
char S[3];
char T[3];

int main(){
    cin >> S[0] >> S[1] >> S[2];
    cin >> T[0] >> T[1] >> T[2];

    if ((S[0] == T[0] && S[1] == T[1] && S[2] == T[2]) || (S[0] != T[0] && S[1] != T[1] && S[2] != T[2])){
        printf("Yes\n");
        return 0;
    }else{
        printf("No\n");
    }
    return 0;
}
