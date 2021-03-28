#include <bits/stdc++.h>
using namespace std;

int main() {

	char x[4];
	char y[4];

	char* s = x;
	char* s2 = y;

	cin >> s;

	*s2 = *(s + 1);
	*(s2 + 1) = *(s + 2); 
	*(s2 + 2) = *s;

	for(int i=0; i < 3; i++)
		cout << *(s2 + i);



	return 0;
}