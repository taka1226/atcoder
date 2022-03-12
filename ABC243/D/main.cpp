#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//inputs
int N;
ll X;
string S;
string T;

int main(){
    cin >> N >> X;
    cin >> S;

    for (int i=0;i<N;i++){
        if (T.size() >= 1){
            if (S[i] == 'U'){
                T.erase( --T.end() );
            }else{
                T += S[i];
            }
        }else{
            T += S[i];
        }
    }


    ll tmp_X = X;
    for (int i=0;i<T.size();i++){
        if (T[i] == 'R'){
            tmp_X = tmp_X * 2 + 1;
        }else if (T[i] == 'L'){
            tmp_X = tmp_X * 2;
        }else if (T[i] == 'U'){
            tmp_X = tmp_X / 2;
        }
    }

    cout << tmp_X << endl;
    return 0;
}
