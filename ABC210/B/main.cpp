#include<bits/stdc++.h>
using namespace std;

//input
int N;
string S;

int main(){
    cin >> N;
    cin >> S;
    for (int i=0;i<N;i++){
        int card = S[i] - '0';
        if (card == 1){
            if (i % 2 == 0){
                printf("Takahashi\n");
            }else{
                printf("Aoki\n");
            }
            return 0;
        }
    }

    return 0;
}
