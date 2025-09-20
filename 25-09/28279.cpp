#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	deque<int> deq;
	while (N--) {
		int command;
		cin >> command;
		if (command == 1) {
			int add;
			cin >> add;
			deq.push_front(add);
		}
		else if (command == 2) {
			int add;
			cin >> add;
			deq.push_back(add);
		}
		else if (command == 3) {
			if (deq.empty()) cout << -1 << '\n';
			else {
				cout << deq.front() << '\n';
				deq.pop_front();
			}
		}
		else if (command == 4) {
			if (deq.empty()) cout << -1 << '\n';
			else {
				cout << deq.back() << '\n';
				deq.pop_back();
			}
		}
		else if (command == 5) {
			cout << deq.size() << '\n';
		}
		else if (command == 6) {
			if (deq.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else if (command == 7) {
			if (deq.empty()) cout << -1 << '\n';
			else {
				cout << deq.front() << '\n';
			}
		}
		else {
			if (deq.empty()) cout << -1 << '\n';
			else {
				cout << deq.back() << '\n';
			}
		}
	}

    return 0;
}