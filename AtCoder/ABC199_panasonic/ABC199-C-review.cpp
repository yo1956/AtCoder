#include <bits/stdc++.h>
using namespace std;

template <typename T> bool chmax(T& a, const T& b); // aよりもbが大きいならばaをbで更新する // 更新されたならばtrueを返す
template <typename T> bool chmin(T& a, const T& b); // aよりもbが小さいならばaをbで更新する // 更新されたならばtrueを返す

//TLE解消済み
//O(NQ)→O(N+Q)

int main() {
	int N,Q;
	string S;

	cin >> N;
	cin >> S;
	cin >> Q;

	bool flag = false; //前半 N 文字と後半 N 文字が(計算上で)入れ替わっているかを表す

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
		//Ti=2の時はflagの真偽を反転
		if (query[i][0] == 2) {
			flag = !flag;
		}
		//Ti=1の時
		else {
			//前半後半が入れ替わっていないのなら普通に入れ替えればよい
			//入れ替わっているならAi,Biの値をそれに対応するよう変換
			if (flag == true) {
				for (int j = 1; j <= 2; ++j) {
					if (query[i][j] < N) {
						query[i][j] += N;
					}
					else {
						query[i][j] -= N;
					}
				}
			}

			temp = S[query[i][1]];
			S[query[i][1]] = S[query[i][2]];
			S[query[i][2]] = temp;
		}
	}
		
	//全クエリ処理後flag==trueならSの前半後半を入れ替えて出力、flag==falseならそのまま出力
	if (flag == true) {
		S = S.substr(N) + S.substr(0, N);
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