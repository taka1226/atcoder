#include<bits/stdc++.h>
using namespace std;

//const
const int MAX_STR = 3005;

//input
string s, t;
int dp[MAX_STR][MAX_STR];


int main(){
    cin >> s >> t;
    s = 'T' + s;
    t = 'T' + t;

    int cand1, cand2;
    for (int i=1;i<=s.size() - 1;i++){
        for (int j=1;j<=t.size() - 1;j++){
            if (s[i] == t[j]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }else{
                cand1 = dp[i][j - 1];
                cand2 = dp[i - 1][j];
                if (cand1 >= cand2){
                    dp[i][j] = cand1;
                }else{
                    dp[i][j] = cand2;
                }
            }
        }
    }

    //復元
    string res = "";
    int i = s.size() - 1;
    int j = t.size() - 1;
    while (i > 0 && j > 0){
        if (dp[i][j] == dp[i - 1][j]){
            --i;
        }
        else if (dp[i][j] == dp[i][j - 1]){
            --j;
        }

        else{
            res = s[i] + res;
            --i, --j;
        }
    }

    cout << res << endl;


    return 0;
}
