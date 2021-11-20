#include<bits/stdc++.h>
using namespace std;

//input
int S, T, X;

int main(){
    cin >> S >> T >> X;

    if (S < T){
        if (S <= X && X < T){
            printf("Yes\n");
            return 0;
        }else{
            printf("No\n");
            return 0;
        }
    }else if (S > T){
        T += 24;
        for (int i=0;i<2;i++){
            X += i * 24;
            if (S <= X && X < T){
                printf("Yes\n");
                return 0;
            }
        }
        printf("No\n");
        return 0;
    }

    return 0;
}
