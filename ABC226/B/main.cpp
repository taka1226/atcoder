#include <iostream>
#include <vector>
#include <set>

using namespace std;

int N, L;
set<vector<int>> st;

int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> L;
        vector<int> v(L);
        for (auto& x : v){
            cin >> x;
        }
        st.insert(v);
    }

    cout << st.size() << endl;
}
