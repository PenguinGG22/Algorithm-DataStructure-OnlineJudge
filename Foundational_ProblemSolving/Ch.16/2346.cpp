#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	deque<pair<int, int>> dq;

	for (int i = 1; i <= N; i++) {
		int move;
		cin >> move;
		dq.push_back({ i, move });
	}

	vector<int> result;
	
	while (!dq.empty()) {
		int idx = dq.front().first;
		int move = dq.front().second;
		dq.pop_front();
		result.push_back(idx);

		if (dq.empty()) break;

		if (move > 0) {
			for (int i = 0; i < move - 1; i++) {
				dq.push_back(dq.front());
				dq.pop_front();
			}
		}
		else {
			for (int i = 0; i < -move; ++i) {
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}
	}

	for (int i : result) {
		cout << i << " ";
	}

    return 0;
}