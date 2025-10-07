#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	while (T--) {
		string str;
		cin >> str;

		int cnt = 0;
		int isSequence = 0;
		for (char c : str) {
			if (c == 'O') {
				isSequence++;
				cnt += isSequence;
			}
			else isSequence = 0;
		}

		cout << cnt << '\n';
	}
	return 0;
}