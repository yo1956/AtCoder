#include <bits/stdc++.h>
using namespace std;

//BOM無しUTF-8だとコンパイル通らない
//BOM有りにすると通る

int main() {
	int N, M;
	cin >> N >> M;
	vector<int> A(M), B(M);
	for (int i = 0; i < M; i++) {
		cin >> A.at(i) >> B.at(i);
	}


	for (auto&& i : A)
		i--;

	for (auto&& i : B)
		i--;


	vector<vector<char>> result(N, vector<char>(N)); //charで何で初期化するか指定せずに要素数用意だけするとおかしくなる？→そうではなく、charに全角文字を入れてたからおかしかった
	//vector<vector<char>> result(N, vector<char>(N, '-'));


	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i == j)
				result.at(i).at(j) = '-';
			else
			{
				for (int k = 0; k < M; k++)
				{
					if (A.at(k) == i && B.at(k) == j)
					{
						result.at(i).at(j) = 'o';
						break;
					}
					else if (A.at(k) == j && B.at(k) == i)
					{
						result.at(i).at(j) = 'x';
						break;
					}
					else
						result.at(i).at(j) = '-';
						
				}
			}
		}
	}

	for (int i = 0 ; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << result.at(i).at(j);
			if (j < N - 1)
				cout << " ";
			else
				cout << endl;
		}
	}
	
}