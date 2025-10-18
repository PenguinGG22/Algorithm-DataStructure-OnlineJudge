#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long A, B;
	cin >> A >> B;
	long long num1 = A;
	long long num2 = B;
	while (B > 0) {
		long long tmp = B;
		B = A % B;
		A = tmp;
	}
	long long lcm = (num1 / A) * num2;
	cout << lcm;

	return 0;
}