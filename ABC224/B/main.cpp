#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//const
const int MAX_H = 55;
const int MAX_W = 55;

//input
int H, W;
ll A[MAX_H][MAX_W];

int main(){
    cin >> H >> W;
    for (int i=0;i<H;i++){
        for (int j=0;j<W;j++){
            cin >> A[i][j];
        }
    }

    for (int i1=0;i1<H;i1++){
        for (int i2=i1+1;i2<H;i2++){
            for (int j1=0;j1<W;j1++){
                for (int j2=j1+1;j2<W;j2++){
                    if (A[i1][j1] + A[i2][j2] > A[i2][j1] + A[i1][j2]){
                        printf("No\n");
                        return 0;
                    }
                }
            }
        }
    }

    printf("Yes\n");
    return 0;
}
