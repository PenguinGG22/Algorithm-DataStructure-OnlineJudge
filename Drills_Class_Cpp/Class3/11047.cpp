#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int cnt = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (k / arr[i] != 0) {
			int quotient = k / arr[i];
			cnt += quotient;
			k = k - arr[i] * quotient;
		}
	}

	cout << cnt;
	delete[] arr;
	return 0;
}