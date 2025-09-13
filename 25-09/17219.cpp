#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    map<string, string> key;
    for (int i = 0; i < N; ++i) {
        string getsite, getpw;
        cin >> getsite >> getpw;
        key[getsite] = getpw;
    }

    for (int i = 0; i < M; ++i) {
        string findsite;
        cin >> findsite;

        cout << key[findsite] << '\n';
    }

    return 0;
}