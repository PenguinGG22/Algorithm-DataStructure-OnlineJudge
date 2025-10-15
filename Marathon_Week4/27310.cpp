#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string S;
    cin >> S;
    int count = S.length();

    for (char c : S) {
        if (c == ':') count++;
        if (c == '_') count += 5;
    }

    cout << count;

    return 0;
}