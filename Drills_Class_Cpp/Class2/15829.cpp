#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int L;
    cin >> L;
    string str;
    cin >> str;

    long long hash_value = 0;
    long long r_pow = 1;
    long long M = 1234567891;

    for (int i = 0; i < L; i++) {
        long long a_i = str[i] - 'a' + 1;
        long long term = (a_i * r_pow) % M;
        hash_value = (hash_value + term) % M;
        r_pow = (r_pow * 31) % M;
    }

    cout << hash_value;

    return 0;
}