#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        int next = N % 100;
        if ((N + 1) % next == 0) cout << "Good" << '\n';
        else cout << "Bye" << '\n';
    }

    return 0;
}