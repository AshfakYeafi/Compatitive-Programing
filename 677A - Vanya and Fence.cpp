#include<bits/stdc++.h>
using namespace std;


int main() {
	int n, h, c = 0;
	cin >> n >> h;
	while (n--) {
		int x;
		cin >> x;
		if (x > h) {
			c += 2;
		}
		else {
			c++;
		}
	}
	cout << c;
}
