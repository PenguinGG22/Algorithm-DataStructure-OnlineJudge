#include <bits/stdc++.h>
using namespace std;

int fib(int N) {
    if (N == 1 || N == 2) {
        return 1;
    }
    else {
        return (fib(N - 1) + fib(N - 2));
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    cout << fib(N) << ' ' << N - 2;

    return 0;
}