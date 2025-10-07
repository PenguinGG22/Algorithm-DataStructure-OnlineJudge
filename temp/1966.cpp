#include <iostream>
#include <queue>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        queue<pair<int, int>> q;
        int priority[10] = {0};

        for (int i = 0; i < N; i++) {
            int p;
            cin >> p;
            q.push({i, p});
            priority[p]++;
        }

        int count = 0;

        while (!q.empty()) {
            int idx = q.front().first;
            int pri = q.front().second;
            q.pop();

            bool has_higher = false;
            for (int i = pri + 1; i <= 9; i++) {
                if (priority[i] > 0) {
                    has_higher = true;
                    break;
                }
            }

            if (has_higher) {
                q.push({idx, pri});
            } else {
                count++;
                priority[pri]--;
                if (idx == M) {
                    cout << count << '\n';
                    break;
                }
            }
        }
    }

    return 0;
}
