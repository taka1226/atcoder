#include<bits/stdc++.h>
using namespace std;

//input
int S, T;

int main(){
    cin >> S >> T;

    int ans = 0;
    for (int a=0;a<=S;a++){
        for (int b=0;b<=S;b++){
            for (int c=0;c<=S;c++){
                if (a + b + c <= S && a * b * c <= T){
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}
