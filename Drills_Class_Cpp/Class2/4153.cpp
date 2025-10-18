#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long side[3];

	while (true) {
		cin >> side[0] >> side[1] >> side[2];
		if (side[0] == 0 && side[1] == 0 && side[2] == 0) break;
		sort(side, side + 3);
		if (side[0] * side[0] + side[1] * side[1] == side[2] * side[2]) cout << "right" << '\n';
		else cout << "wrong" << '\n';
	}

	return 0;
}