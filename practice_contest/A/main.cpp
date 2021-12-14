#include<bits/stdc++.h>
#include<atcoder/dsu>
using namespace std;
using namespace atcoder;

//input
int N, Q;

int main(){
    cin >> N >> Q;
    dsu d(N);
    for (int i=0;i<Q;i++){
        int t, u, v;
        cin >> t >> u >> v;
        if (t == 0){
            d.merge(u, v);
        }else if (t == 1){
            if(d.same(u, v)){
                printf("1\n");
            }else{
                printf("0\n");
            }
        }
    }

    return 0;
}
