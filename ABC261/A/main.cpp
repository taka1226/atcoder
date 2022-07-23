#include<bits/stdc++.h>
using namespace std;

int L1, L2, R1, R2;
int main(){
	cin >> L1 >> R1 >> L2 >> R2;
	int start = max(L1, L2);
	int end = min(R1, R2);

	if (start < end){
		cout << end - start << endl;
	}else{
		cout << 0 << endl;
	}
	return 0;
}
