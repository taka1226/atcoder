#include<bits/stdc++.h>
using namespace std;

set<string> st{"ABC" , "ARC" , "AGC" , "AHC"};
set<string> S;

int main(){
    string s1, s2, s3;
    cin >> s1;
    cin >> s2;
    cin >> s3;

    S.insert(s1);
    S.insert(s2);
    S.insert(s3);

    for (auto& s : S){
        auto ele = st.find(s);
        st.erase(ele);
    }

    for (auto& s : st){
        cout << s << endl;
    }
    return 0;
}
