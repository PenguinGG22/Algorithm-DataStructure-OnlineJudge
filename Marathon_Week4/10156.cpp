#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int K, N, M;
	cin >> K >> N >> M;
	int money = K * N - M;
	if (money <= 0) money = 0;
	cout << money;

	return 0;
}