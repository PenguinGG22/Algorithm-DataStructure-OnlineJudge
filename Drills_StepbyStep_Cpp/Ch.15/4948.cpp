#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (true) {
        int N;
        cin >> N;
        if (N == 0) break;

        int cnt = 0;
        for (int i = N + 1; i <= 2 * N; i++) {
            if (i <= 1) {
                continue;
            }
            if (i <= 3) {
                cnt++;
                continue;
            }

            bool isPrime = true;
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) cnt++;
        }

        cout << cnt << '\n';
    }

    return 0;
}