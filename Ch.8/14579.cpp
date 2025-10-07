#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int M = 14579;
    int A, B;
    cin >> A >> B;

    long long result = 1;
    for (int i = A; i <= B; i++) {
        int sum = 0;
        for (int j = 1; j <= i; j++) {
            sum = (sum + j) % M;
        }
        sum %= M;
        result = (result * sum) % M;
    }

    cout << result;

    return 0;
}
