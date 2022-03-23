#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//inputs
int T;
ll a, s;

int main(){
    cin >> T;
    for (int i=0;i<T;i++){
        cin >> a >> s;

        ll b = s - 2 * a; //b = x xor y
        if (b < 0 || (a & b)){
            printf("No\n");
        }else{
            printf("Yes\n");
        }
    }


    return 0;
}
