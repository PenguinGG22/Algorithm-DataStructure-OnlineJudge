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
        int sum = i * (i + 1) / 2;
        result = (result * sum) % M;
    }
    cout << result;

    return 0;
}