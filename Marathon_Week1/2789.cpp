#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string S;
    cin >> S;
    char cambridge[9] = {'C', 'A', 'M', 'B', 'R', 'I', 'D', 'G', 'E'};

    for (int i = 0; i < 9; i++) {
        string str = "";
        for (char c : S) {
            if (c != cambridge[i]) {
                str += c;
            }
        }
        S = str;
    }

    cout << S;

    return 0;
}