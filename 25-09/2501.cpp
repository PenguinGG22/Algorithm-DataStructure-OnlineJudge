#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> vec;

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			vec.push_back(i);
		}
	}

	if (vec.size() < k) {
		cout << 0;
	}
	else {
		cout << vec[k - 1];
	}

	return 0;
}