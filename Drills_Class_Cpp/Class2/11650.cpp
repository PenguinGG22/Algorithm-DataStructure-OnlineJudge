#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<pair<int, int>> coords(n);

    for (int i = 0; i < n; ++i) {
        cin >> coords[i].first >> coords[i].second;
    }

    sort(coords.begin(), coords.end());

    for (int i = 0; i < n; ++i) {
        cout << coords[i].first << " " << coords[i].second << "\n";
    }

    return 0;
}