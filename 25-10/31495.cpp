#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string S;
    getline(cin, S);

    if (S.front() == '"' && S.back() == '"') {
        if (S.size() > 2) {
            for (int i = 1; i < S.size() - 1; i++) {
                cout << S[i];
            }
        }
        else {
            cout << "CE";
        }
    }
    else {
        cout << "CE";
    }

    return 0;
}