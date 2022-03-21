#include<bits/stdc++.h>
using namespace std;

//inputs
int A, B, C, D;

bool is_prime(long long n) {  // is n prime or not
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    cin >> A >> B >> C >> D;


    for (int i=A;i<=B;i++){
        int min_sum = i + C;
        int max_sum = i + D;

        bool flg = false;
        for (int j=min_sum;j<=max_sum;j++){
            if (is_prime(j)){
                flg = true;
            }
        }
        if (!flg){ //範囲ないの数が素数ではなかった
            printf("Takahashi\n");
            return 0;
        }
    }

    printf("Aoki\n");
    return 0;
}
