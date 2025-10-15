#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    bool isFirst = false;
    int x1, y1, x2, y2;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            int K;
            cin >> K;

            if (K == 1) {
                if (isFirst == false) {
                    x1 = i;
                    y1 = j;
                    isFirst = true;
                }
                else {
                    x2 = i;
                    y2 = j;
                }
            }
        }
    }
    
    cout << abs(x2 - x1) + abs(y2 - y1);

    return 0;
}