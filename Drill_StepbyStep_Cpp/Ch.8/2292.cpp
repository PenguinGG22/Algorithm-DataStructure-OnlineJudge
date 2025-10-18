#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	
	int dot = 1;
	while (N > 1) {
		N -= 6 * dot;
		dot++;
	}

	cout << dot;
	return 0;
}