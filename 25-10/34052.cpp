#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int sum = 0;
    for (int i = 0; i < 4; i++) {
        int input = 0;
        cin >> input;
        sum += input;
    }

    if (sum <= 1500) cout << "Yes";
    else cout << "No";

    return 0;
}