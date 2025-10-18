#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    set<int> sets;

    for (int i = 0; i < N; i++) {
        int input;
        cin >> input;
        sets.insert(input);
    }

    int M;
    cin >> M;
    while (M--) {
        int find;
        cin >> find;
        if (sets.count(find)) cout << 1 << '\n';
        else cout << 0 << '\n';
    }

    return 0;
}