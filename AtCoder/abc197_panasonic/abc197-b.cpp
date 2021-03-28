#include <bits/stdc++.h>
using namespace std;





int main() {

	int H, W, X, Y;
	cin >> H >> W >> X >> Y;
	/*cout << " ";
	cin >> W;
	cout << " ";
	cin >> X;
	cout << " ";
	cin >> Y;
	cout << endl;*/

	vector<string> str;

	for (int i = 0; i < H; i++) {
		string a;
		cin >> a;
		//cout << endl;

		str.push_back(a);
		
	}

	/*cout << str[0];
	cout << endl;
	cout << str[0][0];*/

	vector<string> str2;
	str2.push_back(".");
	str2.push_back("#");


	int cnt = 1;
	
	//上探索
	for (int i = X-2 ; i >= 0; i--) {
		if (str[i][Y - 1] == str2[0][0])
			cnt++;
		else
			break;
	}

	//cout << str2[0][0] << endl;
	//cout << cnt << endl;
	
	//下探索
	for (int i = X; i <= H-1; i++) {
		if (str[i][Y-1] == str2[0][0])
			cnt++;
		else
			break;
	}

//	cout << cnt << endl;

	//左探索
	for (int i = Y - 2; i >= 0; i--) {
		if (str[X-1][i] == str2[0][0])
			cnt++;
		else
			break;
	}

	//cout << cnt << endl;

	//右探索
	for (int i = Y; i <= W-1; i++) {
		if (str[X-1][i] == str2[0][0])
			cnt++;
		else
			break;
	}

	//cout << cnt << endl;

	cout << cnt;


	return 0;
}