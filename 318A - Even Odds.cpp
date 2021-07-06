#include<bits/stdc++.h>
using namespace std;

int main() {
	long long n, x, e = 0, o = 1;
	cin >> n >> x;
	if (x <= round(n / 2.0)) {
		cout << x * 2 - 1 << endl;
	}
	else {
		cout << (x - (n + 1) / 2) * 2 << endl;
	}

}
