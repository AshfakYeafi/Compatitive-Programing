#include<bits/stdc++.h>
using namespace std;

bool dis(int y) {
	unordered_set<char>s;
	string str;
	str = to_string(y);
	for (char c : str) {
		s.insert(c);
	}
	if (s.size() == 4) {
		return true;
	}

	return false;
}

int main() {
	int y;
	cin >> y;
	while (!dis(y + 1)) {
		y++;
	}
	cout << y + 1;
}
