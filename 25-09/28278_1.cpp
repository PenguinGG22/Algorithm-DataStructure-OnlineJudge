#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	vector<int> stack;

	while (N--) {
		int command;
		cin >> command;
		if (command == 1) {
			int add;
			cin >> add;
			stack.push_back(add);
		}
		else if (command == 2) {
			if (stack.empty()) cout << -1 << '\n';
			else {
				cout << stack.back() << '\n'; 
				stack.pop_back();
			}
		}
		else if (command == 3) {
			cout << stack.size() << '\n';
		}
		else if (command == 4) {
			if (stack.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else {
			if (stack.empty()) cout << -1 << '\n';
			else cout << stack.back() << '\n';
		}
	}

	return 0;
}