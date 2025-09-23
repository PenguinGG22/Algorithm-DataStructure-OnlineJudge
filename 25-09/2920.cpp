#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int arr[8];
	for (int i = 0; i < 8; i++) {
		cin >> arr[i];
	}

	bool isAscending = true;
	bool isDescending = true;
	for (int i = 0; i < 7; i++) {
		if (arr[i] >= arr[i + 1]) isAscending = false;
		if (arr[i] <= arr[i + 1]) isDescending = false;
	}

	if (isAscending) {
		cout << "ascending";
		return 0;
	}
	
	if (isDescending) {
		cout << "descending";
		return 0;
	}

	cout << "mixed";

	return 0;
}