#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int M;
    cin >> M;

    int bit_mask = 0;

    while (M--) {
        string command;
        cin >> command;

        if (command == "add") {
            int add;
            cin >> add;
            bit_mask |= (1 << (add - 1));
        }
        else if (command == "remove") {
            int remove;
            cin >> remove;
            bit_mask &= ~(1 << (remove - 1));
        }
        else if (command == "check") {
            int check;
            cin >> check;
            if (bit_mask & (1 << (check - 1))) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if (command == "toggle") {
            int toggle;
            cin >> toggle;
            bit_mask ^= (1 << (toggle - 1));
        }
        else if (command == "all") {
            bit_mask = (1 << 20) - 1;
        }
        else {
            bit_mask = 0;
        }
    }

    return 0;
}