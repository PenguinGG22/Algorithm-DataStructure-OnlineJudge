#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	if (int(sqrt(N)) * int(sqrt(N)) == N) {
		cout << 1;
		return 0;
	}

	for (int i = 1; i * i <= N; ++i) {
		int tmp = N - i * i;
		int root = (int)sqrt(tmp);
		if (root * root == tmp) {
			cout << 2;
			return 0;
		}
	}

	for (int i = 1; i * i < N; ++i) {
		for (int j = i; j <= N - i * i; ++j) {
			int tmp = N - i * i - j * j;
			if (tmp > 0) {
				int root = (int)sqrt(tmp);
				if (root * root == tmp) {
					cout << 3;
					return 0;
				}
			}
		}
	}
	
	cout << 4;
    
	return 0;
}