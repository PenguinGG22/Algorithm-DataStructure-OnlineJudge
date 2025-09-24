#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long N;
    cin >> N;
    vector<long long> sizes(6);

    for (int i = 0; i < 6; i++) {
        cin >> sizes[i];
    }

    long long T, P;
    cin >> T >> P;
    long long total_shirt = 0;

    for (int i = 0; i < 6; i++) {
        total_shirt += (sizes[i] + T - 1) / T;
    }

    long long total_pen = N / P;
    long long single_pen = N % P;

    cout << total_shirt << '\n';
    cout << total_pen << ' ' << single_pen;

    return 0;
}