#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<string> vec1(N), vec2(N);
        for (int i = 0; i < N; i++) cin >> vec1[i];
        for (int i = 0; i < N; i++) cin >> vec2[i];

        sort(vec1.begin(), vec1.end());
        sort(vec2.begin(), vec2.end());

        if (vec1 == vec2) cout << "NOT CHEATER\n";
        else cout << "CHEATER\n";
    }
    return 0;
}