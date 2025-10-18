#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		int cnt = 0;
		int num = i;
		while (num > 0) {
			cnt += num % 10;
			num /= 10;
		}
		cnt += i;

		if (cnt == n) {
			cout << i;
			return 0;
		}
	}
    
	cout << 0;

	return 0;
}