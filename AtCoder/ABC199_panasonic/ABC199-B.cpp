#include <bits/stdc++.h>
using namespace std;

template <typename T> bool chmax(T& a, const T& b); // aよりもbが大きいならばaをbで更新する // 更新されたならばtrueを返す
template <typename T> bool chmin(T& a, const T& b); // aよりもbが小さいならばaをbで更新する // 更新されたならばtrueを返す



int main() {
	int N;
	vector<int> A,B;

	cin >> N;

	int x = 0;
	for (int i = 0; i < N; ++i) {
		cin >> x;
		A.push_back(x);
	}

	for (int i = 0; i < N; ++i) {
		cin >> x;
		B.push_back(x);
	}

	int max_a = A[0];
	int min_b = B[0];

	for (int i = 1; i < N; ++i) {
		chmax(max_a, A[i]);
	}
	
	for (int i = 1; i < N; ++i) {
		chmin(min_b, B[i]);
	}

	if (max_a > min_b) {
		cout << 0 << endl;
		return 0;
	}

	cout << min_b - max_a + 1 << endl;

	return 0;
	
}



// aよりもbが大きいならばaをbで更新する
// (更新されたならばtrueを返す)
template <typename T>
bool chmax(T & a, const T & b) {
	if (a < b) {
		a = b;  // aをbで更新
		return true;
	}
	return false;
}
// aよりもbが小さいならばaをbで更新する
// (更新されたならばtrueを返す)
template <typename T>
bool chmin(T& a, const T& b) {
	if (a > b) {
		a = b;  // aをbで更新
		return true;
	}
	return false;
}