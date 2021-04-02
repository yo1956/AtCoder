#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, S;
	cin >> N >> S;
	vector<int> A(N), P(N);
	for (int i = 0; i < N; i++) {
		cin >> A.at(i);
	}
	for (int i = 0; i < N; i++) {
		cin >> P.at(i);
	}
	
	
	int cnt = 0;

	for (auto&& i : A) 
	{
		for (auto&& j : P)
		{
			if (i + j == S)
				cnt++;

		}
	}
	
	cout << cnt << endl;
}