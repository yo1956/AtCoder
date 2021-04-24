#include <bits/stdc++.h>
using namespace std;

template <typename T> bool chmax(T& a, const T& b); // aよりもbが大きいならばaをbで更新する // 更新されたならばtrueを返す
template <typename T> bool chmin(T& a, const T& b); // aよりもbが小さいならばaをbで更新する // 更新されたならばtrueを返す

//TLE

int main() {
	int N,Q;
	string S;

	cin >> N;
	cin >> S;
	cin >> Q;

	vector<vector<int>> query(Q,vector<int>(3));
	int t = 0, a = 0, b = 0;

	for (int i = 0; i < Q; ++i) {
		cin >> t >> a >> b;
		query[i][0] = t;

		if (t == 2) {
			query[i][1] = 0;
			query[i][2] = 0;
		}
		else {
			query[i][1] = a - 1;
			query[i][2] = b - 1;
		}
	}

	char temp;
	//string S1, S2;
	for (int i = 0; i < Q; ++i) {
		//Ti=1の時
		if (query[i][0] == 1) {
			temp = S[query[i][1]];
			S[query[i][1]] = S[query[i][2]];
			S[query[i][2]] = temp;

		}
		//Ti=2の時
		else {
			//S1 = S.substr(0, N);
			//S2 = S.substr(N);

			//S = S2 + S1;
			S = S.substr(N) + S.substr(0, N);
		}

	}

	cout << S << endl;

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