#include <bits/stdc++.h>
using namespace std;

int counts[10001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int temp = 0;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        counts[temp]++;
    }

    for (int i = 1; i <= 10000; ++i) {
        for (int j = 0; j < counts[i]; ++j) {
            cout << i << '\n';
        }
    }

    return 0;
}