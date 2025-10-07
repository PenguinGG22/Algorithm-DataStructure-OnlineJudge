#include <iostream>
#include <string>
using namespace std;

int main() {
	int N, B;
	cin >> N >> B;

	if (B == 10) {
		cout << N;
		return 0;
	}

	string str = "";
	while (N > 0) {
		int remainder = N % B;
		if (remainder < 10) {
			str = char('0' + remainder) + str;
		}
		else {
			str = char('A' - 10 + remainder) + str;
		}

		N /= B;
	}

	cout << str;
	return 0;
}