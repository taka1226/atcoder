#include<bits/stdc++.h>
using namespace std;

//inputs
string S;
map<char, int> mp;
int main(){
    cin >> S;

    bool flg1 = false;
    bool flg2 = false;
    bool flg3 = true;
    for (int i=0;i<S.size();i++){
        char s = S[i];
        if (s >= 'a' && s <= 'z'){
            flg1 = true;
        }

        if (s >= 'A' && s <= 'Z'){
            flg2 = true;
        }

        mp[s]++;
        if (mp[s] == 2){
            flg3 = false;
        }
    }

    if (flg1 && flg2 && flg3){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
