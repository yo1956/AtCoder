#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> A(N,0);
	int max = -1; //最高階数

	int cnt = 1; //景観の数 //初期状態を数えて1からとする

	for (int i = 0; i < N; ++i) {
		cin >> A[i];

		if (A[i] > max)
			max = A[i];
	}
		
	//vector<int> calc = A;
	////高さが全部0になったら終わり
	//while (max >= 1) {
	//	for (int i = max; i > 0; --i) {

	//	}

	//	--max;
	//}
	

}