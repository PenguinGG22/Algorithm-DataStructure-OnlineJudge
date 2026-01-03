#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;
    vector<int> a(N);

    for (int i = 0; i < N; i++)
        cin >> a[i];

    int cnt = 0;
    for (int i = 1; i < N; i++) {
        int cur = i - 1;
        int newItem = a[i];

        while (cur >= 0 && newItem < a[cur]) {
            a[cur + 1] = a[cur];
            cnt++;
            if (cnt == K) {
                cout << a[cur + 1];
                return 0;
            }
            cur--;
        }

        if (cur + 1 != i) {
            a[cur + 1] = newItem;
            cnt++;
            if (cnt == K) {
                cout << a[cur + 1];
                return 0;
            }
        }
    }

    cout << -1;
    return 0;
}