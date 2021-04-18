#include <bits/stdc++.h>
using namespace std;

int main() {
	int A, B;

	cin >> A >> B;

	vector<int> Ea;
	vector<int> Eb;

	int calc;

	if (A <= B) {
		for (int i = 1; i <= A; i++) {
			Ea.push_back(i);
			Eb.push_back(-i);
		}

		//EbのサイズがBとなるまで
		while(Eb.size() < B) {
			calc = Eb.back() - 1;
			Eb.push_back(calc);

			Ea[0] += -calc;
		}
	}
	else {
		for (int i = 1; i <= B; i++) {
			Ea.push_back(i);
			Eb.push_back(-i);
		}

		//EaのサイズがAとなるまで
		while(Ea.size() < A) {
			calc = Ea.back() + 1;
			Ea.push_back(calc);

			Eb[0] -= calc;
		}

	}
		
	//神の数列出力
	for (int i = 0; i < A; ++i)
		cout << Ea[i] << " ";

	for (int i = 0; i < B; ++i)
		cout << Eb[i] << " ";

	return 0;
	
}
