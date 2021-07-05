#include<bits/stdc++.h>
using namespace std;

void insert_sort(int A[], int n) {
	int i, j, item;
	for (i = 1; i < n; i++) {
		j = i - 1;
		item = A[i];
		while (j >= 0 && A[j] < item) {
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = item;
	}
}


int main() {
	int n, sum = 0, c_sum = 0, count = 0;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		arr[i] = x;
		sum += x;
	}
	insert_sort(arr, n);
	for (int i : arr) {
		count ++;
		c_sum += i;
		if (c_sum - (sum - c_sum) > 0) {

			cout << count;
			break;
		}

	}

}
