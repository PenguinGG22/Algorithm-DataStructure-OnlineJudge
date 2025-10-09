#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double pi = 3.141592;
    double D1, D2;
    cin >> D1 >> D2;
    cout << fixed << setprecision(6) << D1 * 2 + (D2 * 2) * pi;

    return 0;
}