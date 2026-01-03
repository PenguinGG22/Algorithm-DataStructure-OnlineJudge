
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int sum = 0, i = 1;
    while (true) {
        sum += i;
        if (sum > N) {
            if (i % 2 != 0) cout << sum - N;
            else cout << 0;
            break;
        }
        i++;
    }

    return 0;
}