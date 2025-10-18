#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	int max = a;
	if (a + b <= c) {
		cout << a + b + (a + b - 1);
	}
	else if (a + c <= b) {
		cout << a + c + (a + c - 1);
	}
	else if (b + c <= a) {
		cout << b + c + (b + c - 1);
	}
	else
		cout << a + b + c;
}