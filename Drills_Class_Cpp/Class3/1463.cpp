#include <bits/stdc++.h>
using namespace std;

int D[1000005];
int N;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N;

    for (int i = 2; i <= N; ++i) {
        D[i] = D[i - 1] + 1;
        if (i % 2 == 0) D[i] = min(D[i], D[i / 2] + 1);
        if (i % 3 == 0) D[i] = min(D[i], D[i / 3] + 1);
    }
    
    cout << D[N];
    return 0;
}