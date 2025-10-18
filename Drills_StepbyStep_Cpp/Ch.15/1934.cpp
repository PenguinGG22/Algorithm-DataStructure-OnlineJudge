#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	while (T--) {
		int A, B;
		cin >> A >> B;

		int num1 = A;
		int num2 = B;
		while (B > 0) {
			int tmp = B;
			B = A % B;
			A = tmp;
		}

		cout << num1 * num2 / A << '\n';
	}

	return 0;
}