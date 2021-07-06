#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, pre = 0, x = 0, count = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (pre != x)count++;
		pre = x;
	}
	cout << count;
}
