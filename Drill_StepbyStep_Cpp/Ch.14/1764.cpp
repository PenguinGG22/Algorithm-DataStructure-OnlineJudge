#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    map<string, bool> names;
    vector<string> result;

    for (int i = 0; i < N; ++i) {
        string getname;
        cin >> getname;
        names[getname] = true;
    }

    for (int i = 0; i < M; ++i) {
        string getname;
        cin >> getname;

        if (names.count(getname)) {
            result.push_back(getname);
        }
    }

    sort(result.begin(), result.end());

    cout << result.size() << '\n';
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << '\n';
    }

    return 0;
}