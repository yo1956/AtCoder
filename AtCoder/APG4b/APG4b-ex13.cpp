#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> score(N);

	for (auto&& i : score)
		cin >> i;

	int sum = 0;
	for (auto&& i : score)
		sum += i;

	int avg = sum / N;

	//vector<int> ans(N);
	for (auto&& i : score)
		cout << abs(avg - i) << endl;

	
	return 0;
}