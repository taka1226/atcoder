#include<bits/stdc++.h>
using namespace std;

//input
string S;
int K;

int main(){
    cin >> S >> K;

    sort(S.begin(),S.end());  //必ずソートしてから使うように！

    int cnt = 1;
    do{
        if (cnt == K){
            cout << S << endl;
            return 0;
        }
        cnt++;

    }while(next_permutation(S.begin(),S.end()));
    return 0;
}
