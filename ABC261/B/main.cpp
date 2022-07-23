#include<bits/stdc++.h>
using namespace std;
//const
const int MAX_N = 1005;
//inputs
int N;
char A[MAX_N][MAX_N];

int main(){
	cin >> N;
	for (int i=0;i<N;i++){
		for (int j=0;j<N;j++){
			cin >> A[i][j];
		}
	}

	bool flg = true;
	for (int i=0;i<N;i++){
		for (int j=0;j<N;j++){
			if (i != j){
				if (!(A[i][j] == 'W' && A[j][i] == 'L') && !(A[i][j] == 'L' && A[j][i] == 'W') && !(A[i][j] == 'D' && A[j][i] == 'D')){
					flg = false;
				}
			}
		}
	}

	if (flg){
		cout << "correct" << endl;
	}else{
		cout << "incorrect" << endl;
	}
	return 0;
}
