#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, x;
	cin >> n;
	vector<int> f(n + 1);
	for (int i = 1; i <= n; ++i)
	{
		cin >> x;
		f[x] = i;
	}
	cout << f[1];
	for (int i = 2; i <= n; ++i)
	{
		cout << " " << f[i];
	}
	cout << endl;
	return 0;
}
