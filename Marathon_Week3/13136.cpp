#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long R, C, N;
    cin >> R >> C >> N;
    cout << ((R + N - 1) / N) * ((C + N - 1) / N);

    return 0;
}