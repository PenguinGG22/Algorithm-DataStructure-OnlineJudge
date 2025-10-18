#include<iostream>
#include<vector>
using namespace std;

int main() {
	int m, n;
	cin >> m >> n;

	int cnt = 0;
	int min = 0;
	for (int i = m; i <= n; i++) {
		int num = i;
		if (num < 2) continue;

		bool isDecimal = true;
		for (int j = 2; j < num; j++) {
			if (num % j == 0) {
				isDecimal = false;
				break;
			}
		}
		if (isDecimal == true) {
			if (cnt == 0) {
				min = i;
			}
			cnt += i;
		}
	}

	if (cnt == 0) {
		cout << -1;
		return 0;
	}
	cout << cnt << endl;
	cout << min;
	return 0;
}