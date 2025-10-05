#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<int> vec(N);
    for (int i = 0; i < N; i++) {
        cin >> vec[i];
    }
    int GCD = vec[1] - vec[0];
    for (int i = 1; i < N - 1; i++) {
        int prev = vec[i + 1] - vec[i];
        while (prev > 0) {
            int tmp = prev;
            prev = GCD % prev;
            GCD = tmp;
        }
    }
    cout << (vec[N - 1] - vec[0]) / GCD - (N - 1);

    return 0;
}