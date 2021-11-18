#include<bits/stdc++.h>
using namespace std;

//input
string X;

bool is_next(int a, int b){
    if (a == 9 && b == 0) return true;
    else return b == a + 1;
}
int main(){
    cin >> X;
    int x1, x2, x3, x4;
    x1 = X[0] - '0';
    x2 = X[1] - '0';
    x3 = X[2] - '0';
    x4 = X[3] - '0';
    if (X[0] == X[1] && X[1] == X[2] && X[2] == X[3]){
        printf("Weak\n");
        return 0;
    }else if (is_next(x1, x2) && is_next(x2, x3) && is_next(x3, x4)){
        printf("Weak\n");
        return 0;

    }

    printf("Strong\n");
    return 0;
}
