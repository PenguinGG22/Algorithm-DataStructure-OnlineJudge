#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int H, M;
    cin >> H >> M;
    M -= 45;
    if (M < 0) {
        if (H > 0) {
            H--;
            M += 60;
        }
        else {
            H += 24;
            H--;
            M += 60;
        }
    }
    cout << H << ' ' << M;

    return 0;
}