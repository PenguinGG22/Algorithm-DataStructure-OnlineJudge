#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> N;
		sum += N;
	}
	cout << sum;

	return 0;
}