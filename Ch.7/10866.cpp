#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    deque<int> deq;
    int N;
    cin >> N;
    while (N--) {
        string command;
        cin >> command;
        if (command == "push_front") {
            int add;
            cin >> add;
            deq.push_front(add);
        }
        else if (command == "push_back") {
            int add;
            cin >> add;
            deq.push_back(add);
        }
        else if (command == "pop_front") {
            if (deq.empty())
                cout << -1 << '\n';
            else {
                cout << deq.front() << '\n';
                deq.pop_front();
            }
        }
        else if (command == "pop_back") {
            if (deq.empty())
                cout << -1 << '\n';
            else {
                cout << deq.back() << '\n';
                deq.pop_back();
            }
        }
        else if (command == "size") {
            cout << deq.size() << '\n';
        }
        else if (command == "empty") {
            cout << deq.empty() << '\n';
        }
        else if (command == "front") {
            if (deq.empty())
                cout << -1 << '\n';
            else {
                cout << deq.front() << '\n';
            }
        }
        else {
            if (deq.empty())
                cout << -1 << '\n';
            else {
                cout << deq.back() << '\n';
            }
        }
    }

    return 0;
}