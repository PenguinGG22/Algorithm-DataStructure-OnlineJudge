#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	map <string, bool> set;

	while (N--) {
		string input, InOut;
		cin >> input >> InOut;

		if (InOut == "enter") set[input] = true;
		else set[input] = false;
	}

	for (auto it = set.rbegin(); it != set.rend(); it++) {
		if (it->second != false) cout << it->first << '\n';
	}

	return 0;
}