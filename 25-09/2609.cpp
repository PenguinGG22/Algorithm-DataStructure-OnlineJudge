#include <bits/stdc++.h>
using namespace std;

int getGcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return getGcd(b, a % b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    int gcd = getGcd(a, b);
    int lcm = (a * b) / gcd;

    cout << gcd << '\n';
    cout << lcm << '\n';

    return 0;
}