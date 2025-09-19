#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> initial_line(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> initial_line[i];
    }

    stack<int> side_space;
    int turn = 1;

    for (int person : initial_line) {
        if (person == turn) {
            turn++;
            while (!side_space.empty() && side_space.top() == turn) {
                side_space.pop();
                turn++;
            }
        }
        else {
            side_space.push(person);
        }
    }

    while (!side_space.empty() && side_space.top() == turn) {
        side_space.pop();
        turn++;
    }

    if (side_space.empty()) {
        cout << "Nice\n";
    }
    else {
        cout << "Sad\n";
    }

    return 0;
}