#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    int sum = 0;
    int idx = 0;
    int multiple = 1;
    int none_idx = 0;
    for (char c : str) {
        if (idx % 2 == 0) multiple = 1;
        else multiple = 3;
        idx++;

        if (c == '*') {
            none_idx = idx - 1;
            continue;
        }
        int num = c - '0';
        sum += num * multiple;
    }

    int ISBN = 0;
    for (int i = 0; i <= 9; i++) { 
        if (none_idx % 2 == 0) ISBN = sum + i;
        else ISBN = sum + i * 3;

        if (ISBN % 10 == 0) cout << i;
    }

    return 0;
}