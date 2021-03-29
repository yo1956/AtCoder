#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin >> S;

	int cnt_1 = 0;
	int cnt_plus = 0;
	int cnt_minus = 0;

	/*for (int i = 0; i < S.size(); i++) {
		if (S.at(i) == '1')
			cnt_1++;
	}*/

	for (int i = 0; i < S.size(); i++){
		if (S.at(i) == '+')
			cnt_plus++;
	}
	
	for (int i = 0; i < S.size(); i++) {
		if (S.at(i) == '-')
			cnt_minus++;
	}

	cout << (cnt_plus + 1) - cnt_minus << endl;

	return 0;
}