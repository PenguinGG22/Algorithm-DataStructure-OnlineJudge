#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int num1 = A * D + B * C;
    int num2 = B * D;

    int GCD1 = num1;
    int GCD2 = num2;
    while (GCD2 > 0) {
        int tmp = GCD2;
        GCD2 = GCD1 % GCD2;
        GCD1 = tmp;
    }
    int GCD = GCD1;

    cout << num1 / GCD << ' ' << num2 / GCD;

    return 0;
}