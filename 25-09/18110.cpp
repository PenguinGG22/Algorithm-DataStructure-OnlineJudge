#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    if (N == 0) {
        cout << 0;
        return 0;
    }

    vector<int> vec(N);
    for (int i = 0; i < N; i++) {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    int cut = round(N * 15.0 / 100.0);
    int cnt = N - 2 * cut;

    double sum = 0;
    for (int i = cut; i < N - cut; i++) {
        sum += vec[i];
    }

    cout << round(sum / cnt);

    return 0;
}