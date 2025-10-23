#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A = 0, B = 0, C = 0; // A:남규 B:영훈 C:택희
    int N;
    cin >> N;

    int cnt = 0;
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= N; j++) {
            for (int k = 0; k <= N; k++) {
                A = i; B = j; C = k;
                if (A >= B + 2 && A != 0 && B != 0 && C != 0 && C % 2 == 0) {
                    if (A + B + C == N) {
                        cnt++;
                    }
                }
            }
        }
    }
    cout << cnt;

    return 0;
}
