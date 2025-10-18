#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int S1, S2;
    cin >> S1 >> S2;

    bool samplePassed = true;
    for (int i = 0; i < S1; i++) {
        int N, M;
        cin >> N >> M;
        if (N != M) {
            samplePassed = false;
        }
    }

    bool systemPassed = true;
    for (int i = 0; i < S2; i++) {
        int N, M;
        cin >> N >> M;
        if (N != M) {
            systemPassed = false;
        }
    }

    if (samplePassed == false) {
        cout << "Wrong Answer";
    }
    else if (systemPassed == false) {
        cout << "Why Wrong!!!";
    }
    else {
        cout << "Accepted";
    }

    return 0;
}