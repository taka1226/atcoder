#include<bits/stdc++.h>
using namespace std;

//入力
int P[30];

int main(){
    for (int i=0;i<26;i++){
        cin >> P[i];
    }

    for (int i=0;i<26;i++){
        char al = char(P[i] + 96);
        cout << al;
    }
    printf("\n");
    return 0;
}
