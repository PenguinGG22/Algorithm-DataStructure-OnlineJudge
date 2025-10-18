#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector <long long> dis(N - 1);
	for (int i = 0; i < N - 1; i++) {
		cin >> dis[i];
	}

	vector<long long> price(N);
	for (int i = 0; i < N; i++) {
		cin >> price[i];
	}

	long long total_cost = 0;
	long long min_price = price[0];

	for (int i = 0; i < N - 1; i++) {
		if (price[i] < min_price) {
			min_price = price[i];
		}
		total_cost += min_price * dis[i];
	}

	cout << total_cost << '\n';

	return 0;
}