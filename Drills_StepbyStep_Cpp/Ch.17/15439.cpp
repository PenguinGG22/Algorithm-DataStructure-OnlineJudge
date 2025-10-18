#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    if (N <= 1) {
        cout << 0;
        return 0;
    }

    cout << N * (N - 1);

    return 0;
}