#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    if (N == 0) {
        cout << 1;
        return 0;
    }

    if (N < 0) {
        cout << 32;
        return 0;
    }
    
    int bits = 0;
    while (N > 0) {
        N >>= 1;
        bits++;
    }

    cout << bits;

    return 0;
}