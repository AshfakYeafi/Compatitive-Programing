#include<bits/stdc++.h>
using namespace std;


int main() {
	string str;
	cin >> str;
	for (char c : str) {
		if (c == 'H' || c == 'Q' || c == '9' ) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}
