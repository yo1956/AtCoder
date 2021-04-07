#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;

	int a, b;
	vector<pair<int, int>> ab(N);
	for (int i = 0; i < N; i++) {
		cin >> a >> b;
		//ab.push_back(make_pair(b, a));
		ab[i].first = b;
		ab[i].second = a;
	}

	sort(ab.begin(), ab.end());

	for (int i = 0; i < N; i++) {
		swap(ab[i].first, ab[i].second);
		cout << ab[i].first << " " << ab[i].second << endl;
	}
}