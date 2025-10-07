#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int money;
		cin >> money;

		int Q = 0, D = 0, N = 0, P = 0;
		if (money >= 25) {
			Q = money / 25;
			money -= 25 * Q;
		}
		if (money >= 10) {
			D = money / 10;
			money -= 10 * D;
		}
		if (money >= 5) {
			N = money / 5;
			money -= 5 * N;
		}
		P = money;

		cout << Q << ' ' << D << ' ' << N << ' ' << P << endl;
	}
	
	return 0;
}