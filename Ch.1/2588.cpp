#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    string M;
    cin >> N >> M;
    for (int i = 2; i >= 0; i--) {
        cout << N * (M[i] - '0') << '\n';
    }
    cout << N * stoi(M);

    return 0;
}