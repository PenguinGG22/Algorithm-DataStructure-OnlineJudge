#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> vec;

	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		vec.push_back(input);
	}

	int cnt = 0;
	for (int i = 0; i < vec.size(); i++) {
		int num = vec[i];
		bool isDecimal = true;

		if (num < 2) continue;
		for (int j = 2; j < num; j++) {
			if (num % j == 0) {
				isDecimal = false;
				break;
			}
		}
		if (isDecimal == true) {
			cnt++;
		}
	}
    
	cout << cnt;

	return 0;
}