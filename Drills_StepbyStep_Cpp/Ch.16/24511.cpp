#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	deque<int> deq;
	vector<int> vec;

	for (int i = 0; i < N; i++) {
		int add;
		cin >> add;
		vec.push_back(add);
	}

	for (int i = 0; i < N; i++) {
		int add;
		cin >> add;
		if (!vec[i]) deq.push_front(add);
	}

	int M;
	cin >> M;

	while (M--) {
		int add;
		cin >> add; 
		deq.push_back(add);
		cout << deq.front() << ' ';
		deq.pop_front();
	}

    return 0;
}