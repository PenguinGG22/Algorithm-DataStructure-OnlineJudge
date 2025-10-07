#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<int> vec(N + 1, 0);

    for (int i = 1; i <= N; ++i) {
        int num;
        cin >> num;
        vec[i] = vec[i - 1] + num;
    }

    for (int i = 0; i < M; ++i) {
        int st, en;
        cin >> st >> en;
        cout << vec[en] - vec[st - 1] << '\n';
    }

    return 0;
}