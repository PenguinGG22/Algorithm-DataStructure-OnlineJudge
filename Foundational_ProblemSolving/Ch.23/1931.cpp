#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<pair<int, int>> meeting(N);

	for (int i = 0; i < N; i++) {
		cin >> meeting[i].second >> meeting[i].first;
	}

	sort(meeting.begin(), meeting.end());

	int cnt = 0;
	int end = 0;

	for (int i = 0; i < N; i++) {
		int st_time = meeting[i].second;
		int en_time = meeting[i].first;

		if (st_time >= end) {
			cnt++;
			end = en_time;
		}
	}

	cout << cnt << '\n';

	return 0;
}