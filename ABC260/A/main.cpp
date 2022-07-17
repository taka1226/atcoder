#include<bits/stdc++.h>
using namespace std;

//inputs
string S;
map<char, int> mp;

int main(){
	cin >> S;
	for (auto s : S){
		mp[s]++;
	}

	char ans = '#';
	for (auto [x, y] : mp){
		if (y == 1){
			ans = x;
		}
	}

	if (ans == '#'){
		cout << -1 << endl;
	}else{
		cout << ans << endl;
	}
	return 0;
}
