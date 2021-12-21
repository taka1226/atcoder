#include<bits/stdc++.h>
using namespace std;

//inout
string S;
vector<int> V(10);
int main(){
    cin >> S;
    //oの数が5以上なら0

    int ans = 0;
    for (int i=0;i<=9999;i++){
        vector<bool> flag(10); //false で初期化される
        int X = i;
        for (int j=0;j<4;j++){
            flag[X%10] = true;
            X = X / 10;
        }
        bool flag2 = true;
        for (int j=0;j<=9;j++){
            if (S[j] == 'o' && !flag[j]){
                flag2 = false;
            }
            if (S[j] == 'x' && flag[j]){
                flag2 = false;
            }
        }

        if (flag2){
            ans++;
        }
    }

    cout << ans << endl;


    return 0;
}
