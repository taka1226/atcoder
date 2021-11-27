#include<bits/stdc++.h>
using namespace std;

//const
const int MAX_N = 100005;

struct Train {
    int pre;
    int next;
};

int N, Q;
Train T[MAX_N];

vector<int> vec;

void my_output(int p){
    vec.erase(vec.begin(), vec.end());
    int prev;
    prev = p;
    int initial_train;
    for (;;){
        initial_train = prev;
        prev = T[prev].pre;
        if (prev == 0){
            break;
        }
    }

    int next_train = initial_train;
    while (next_train != 0){
        vec.push_back(next_train);
        next_train = T[next_train].next;
    }
}

int main(){
    cin >> N >> Q;
    for (int i=0;i<Q;i++){
        int q;cin >> q;
        int x, y;
        if (q == 1 || q == 2){
            cin >> x >> y;
            if (q == 1){
                T[x].next = y;
                T[y].pre = x;
            }else{
                T[x].next = 0;
                T[y].pre = 0;
            }
        }else if (q == 3){
            cin >> x;
            my_output(x);
            cout << vec.size() << " ";
            for (int i=0;i<vec.size();i++){
                if (i < vec.size() - 1){
                    cout << vec[i] << " ";
                }else{
                    cout << vec[i] << endl;
                }
            }
        }
    }
    return 0;
}
