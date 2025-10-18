#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;

    int cnt = 1;
    int cnt_K = 1;
    while (K > 0) {
        cnt *= N;
        cnt_K *= K;
        N--;
        K--;
    }

    cout << cnt / cnt_K;

    return 0;
}