#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	map<string, bool> set;

	while (N--) {
		string input;
		cin >> input;
		set[input] = true;
	}

	int cnt = 0;
	while (M--) {
		string input;
		cin >> input;
		if (set[input] == true) cnt++;
	}

	cout << cnt;
	return 0;
}