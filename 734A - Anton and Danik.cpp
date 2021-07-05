#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, a = 0, d = 0;
	string s;
	cin >> n >> s;
	for (char c : s) {
		if (c == 'A')a++;
		else d++;
	}
	(a == d) ? (cout << "Friendship") : (a > d ? cout << "Anton" : cout << "Danik");
}
