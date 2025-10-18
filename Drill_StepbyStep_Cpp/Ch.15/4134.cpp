#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;

        while (true) {
            if (N <= 1) {
                N = 2;
            }

            bool isPrime = true;
            for (long long i = 2; i * i <= N; i++) {
                if (N % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                cout << N << '\n';
                break;
            }

            N++;
        }
    }

    return 0;
}