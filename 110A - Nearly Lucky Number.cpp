#include<bits/stdc++.h>
using namespace std;

int main() {
	string str;
	cin >> str;
	int c = 0;
	for (char s : str) {
		if (s == '4' || s == '7')c++;
	}
	if (c == 4 || c == 7) {
		cout << "YES";

	}
	else {
		cout << "NO";
	}
}
