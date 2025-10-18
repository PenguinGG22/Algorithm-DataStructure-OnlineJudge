#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> original_v(n);
    vector<int> sorted_v;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        original_v[i] = x;
        sorted_v.push_back(x);
    }

    sort(sorted_v.begin(), sorted_v.end());

    map<int, int> m;
    int rank = 0;
    for (int i = 0; i < sorted_v.size(); i++) {
        int current_val = sorted_v[i];
        if (m.find(current_val) == m.end()) {
            m[current_val] = rank;
            rank++;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << m[original_v[i]] << " ";
    }

    return 0;
}