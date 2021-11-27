#include<bits/stdc++.h>
using namespace std;

//input
char S[2][2];
int main(){
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            cin >> S[i][j];
        }
    }

    int cnt = 0;
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            if (S[i][j] == '#'){
                cnt++;
            }
        }
    }

    if (cnt >= 3){
        printf("Yes\n");
        return 0;
    }else{
        int x1, y1, x2, y2;
        int a = 0;
        for (int i=0;i<2;i++){
            for (int j=0;j<2;j++){
                if (S[i][j] == '#'){
                    a++;
                    if (a == 1){
                        x1 = i;y1 = j;
                    }else{
                        x2 = i;y2 = j;
                    }
                }
            }
        }

        if (x1 == 0 && y1 == 0 && x2 == 1 && y2 == 1){
            printf("No\n");
            return 0;
        }else if (x1 == 0 && y1 == 1 && x2 == 1 && y2 == 0){
            printf("No\n");
            return 0;
        }else{
            printf("Yes\n");
            return 0;
        }

    }
    return 0;
}
