#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, A, B;
    cin >> N >> A >> B;
    if (A / 2 + B > N) cout << N;
    else cout << A / 2 + B;

    return 0;
}