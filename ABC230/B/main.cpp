#include<bits/stdc++.h>
using namespace std;

string S;

int main(){
    cin >> S;
    string initial = S.substr(0, 3);

    if (initial.size() >= 3){
        if (initial == "oxx" || initial == "xxo" || initial == "xox"){
            for (int i=0;i<S.size();i++){
                if (S[i] != initial[i % 3]){
                    printf("No\n");
                    return 0;
                }
            }
            printf("Yes\n");

        }else{
            printf("No\n");
        }
    }else{
        if (S.substr(0, 2) == "oo"){
            printf("No\n");
        }else{
            printf("Yes\n");
        }
    }
    return 0;

}
