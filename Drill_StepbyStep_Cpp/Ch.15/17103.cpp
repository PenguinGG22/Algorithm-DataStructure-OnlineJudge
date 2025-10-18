#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<bool> isPrime(1000001, true);
    isPrime[0] = isPrime[1] = false;
    for (int p = 2; p * p < 1000001; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i < 1000001; i += p) {
                isPrime[i] = false;
            }
        }
    }

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        int cnt = 0;

        for (int i = 2; i <= N / 2; i++) {
            if (isPrime[i] && isPrime[N - i]) {
                cnt++;
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}