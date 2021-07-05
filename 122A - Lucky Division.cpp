#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	bool b = false;
	int a[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
	for (int i : a) {
		if (n % i == 0) {
			b = true;
			break;
		}
	}
	if (b) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}
