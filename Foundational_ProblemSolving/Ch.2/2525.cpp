#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int H, M;
    cin >> H >> M;
    int C;
    cin >> C;
    H += (C / 60);
    M += (C % 60);
    if (M >= 60) {
        M -= 60;
        H++;
    }
    if (H >= 24) {
        H -= 24;
    }

    cout << H << ' ' << M;

    return 0;
}