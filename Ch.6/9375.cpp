#include <bits/stdc++.h>
using namespace std;

int N, M;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N;

    while (N--) {
        cin >> M;
        map<string, int> cnt;

        while (M--) {
            string name, type;
            cin >> name >> type;
            cnt[type]++;
        }

        int ans = 1;

        for (auto it = cnt.begin(); it != cnt.end(); ++it) {
            ans *= (int)(it->second + 1);
        }

        cout << ans - 1 << '\n';
    }

    return 0;
}