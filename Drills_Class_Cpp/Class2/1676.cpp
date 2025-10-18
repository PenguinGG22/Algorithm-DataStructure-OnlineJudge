#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int cnt = 0;
    for (int i = 1; i <= N; i++) {
        int num = i;
        while (num > 0 && num % 5 == 0) {
            cnt++;
            num /= 5;
        }
    }

    cout << cnt;

    return 0;
}