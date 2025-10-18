#include <bits/stdc++.h>
using namespace std;

int D[11];
int T, N;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> T;

    D[1] = 1;
    D[2] = 2;
    D[3] = 4;

    for (int i = 3; i < 10; ++i) {
        D[i + 1] = D[i] + D[i - 1] + D[i - 2];
    }

    while (T--) {
        cin >> N;
        cout << D[N] << '\n';
    }

    return 0;
}