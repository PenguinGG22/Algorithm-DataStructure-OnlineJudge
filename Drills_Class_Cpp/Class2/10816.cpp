#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	unordered_map<int, int> card_cnt;

	cin >> N;

	while (N--) {
		int i;
		cin >> i;
		card_cnt[i]++;
	}

	int M;
	
	cin >> M;

	while (M--) {
		int i;
		cin >> i;
		cout << card_cnt[i] << ' ';
	}

	return 0;
}