#include<bits/stdc++.h>
using namespace std;

string X;
int N;
vector<string>S;


bool compare(string& s1, string& s2){
    int min_len = min(s1.size(), s2.size());
    for (int i=0;i<min_len;i++){
        if (s1[i] == s2[i]) continue;
        else return X.find(s1[i]) < X.find(s2[i]);
    }

    return s1.size() < s2.size();

}

int main(){
    cin >> X;
    cin >> N;
    for (int i=0;i<N;i++){
        string s;
        cin >> s;
        S.push_back(s);
    }

    sort(S.begin(),S.end(), compare );

    for (auto& ele_s: S){
        cout << ele_s << endl;
    }


    return 0;
}
