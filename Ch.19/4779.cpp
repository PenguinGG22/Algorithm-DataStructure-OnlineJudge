#include <bits/stdc++.h>
using namespace std;

void recursive(vector<char>& vec, int idx, int size) {
	if (size <= 1) return;

	int newsize = size / 3;
	for (int i = idx + newsize; i < idx + newsize * 2; i++) {
		vec[i] = ' ';
	}

	recursive(vec, idx, newsize);
	recursive(vec, idx + newsize * 2, newsize);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	while (cin >> N) {
		int size = pow(3, N);
		vector<char> vec(size, '-');

		recursive(vec, 0, size);

		for (char c : vec) {
			cout << c;
		}

		cout << '\n';
	}

	return 0;
}