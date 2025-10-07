#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	stack<int> stack;

	while (N--) {
		int command;
		cin >> command;
		if (command == 1) {
			int add;
			cin >> add;
			stack.push(add);
		}
		else if (command == 2) {
			if (stack.empty()) cout << -1 << '\n';
			else {
				cout << stack.top() << '\n'; 
				stack.pop();
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
			else cout << stack.top() << '\n';
		}
	}

	return 0;
}