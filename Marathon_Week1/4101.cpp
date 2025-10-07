#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (true) {
        int N, M;
        cin >> N >> M;
        if (N == 0 && M == 0) break;
        if (N > M) cout << "Yes" << '\n';
        else cout << "No" << '\n';
    }

    return 0;
}