#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;

        long long result = 1;

        for (int i = 1; i <= N; i++) {
            result = result * (M - i + 1) / i;
        }

        cout << result << '\n';
    }

    return 0;
}