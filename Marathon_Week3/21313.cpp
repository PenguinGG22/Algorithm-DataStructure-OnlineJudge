#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    if (N % 2 == 0) {
        for (int i = 0; i < N / 2; i++) {
            cout << "1 2 ";
        }
    }
    else {
        for (int i = 0; i < (N - 1) / 2; i++) {
            cout << "1 2 ";
        }
        cout << "3";
    }
    cout << '\n';

    return 0;
}