#include<bits/stdc++.h>
using namespace std;
const int MAX_N = 1000005;
//input
int a, N;

int res = -1;
int my_help(int x){
    string tmp = to_string(x);
    int digit = tmp.size();
    int ans = tmp[0] - '0';
    x -= pow(10, digit - 1) * ans;
    return ans + x * 10;
}
void solve(int x){
    int tmp_x = x;
    int ans = 0;
    while (tmp_x > 0){
        if (tmp_x % a != 0){
            if (tmp_x < 10){
                if (tmp_x == 1)res = ans;
                return;
            }
            tmp_x = my_help(tmp_x);
        }else{
            tmp_x /= a;
        }
        ans++;
    }

}

int main(){
    cin >> a >> N;
    solve(N);
    if (res >= 1){
        cout << res << endl;
        return 0;
    }

    res = -1;
    int new_N = my_help(N);
    res++;
    solve(new_N);


    if (res >= 1){
        cout << res << endl;
        return 0;
    }
    return 0;
}
