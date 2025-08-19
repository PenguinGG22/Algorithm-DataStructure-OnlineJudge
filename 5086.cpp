#include<iostream>
using namespace std;

int main() {
	int n, k, h, l;

	while (true) {
		cin >> n >> k;
		if (n == 0 && k == 0) return 0;

		if (n > k) {
			h = n;
			l = k;
		}
		else {
			h = k;
			l = n;
		}

		if (h % l != 0) {
			cout << "neither" << endl;
		}
		else {
			if (n > k) {
				cout << "multiple" << endl;
			}
			else {
				cout << "factor" << endl;
			}
		}
	}
}