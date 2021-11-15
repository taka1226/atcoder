#include <iostream>
#include <set>

using namespace std;

char S[3];
set<char> st;

int main(){
    cin >> S;
    for (int i=0;i<3;i++){
        st.insert(S[i]);
    }

    if (st.size() == 1){
        cout << 1 << endl;
    }else if (st.size() == 2){
        cout << 3 << endl;
    }else if (st.size() == 3){
        cout << 6 << endl;
    }

    return 0;
}
