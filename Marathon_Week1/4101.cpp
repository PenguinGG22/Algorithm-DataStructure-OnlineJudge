#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num = 20000303;
    string N;
    cin >> N;

    long long remainder = 0;

    for (char c : N) {
        remainder = (remainder * 10 + (c - '0')) % num;
    }

    cout << remainder;

    return 0;
}