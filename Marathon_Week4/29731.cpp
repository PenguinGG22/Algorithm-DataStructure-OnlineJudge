#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<string> vec = {
        "Never gonna give you up",
        "Never gonna let you down",
        "Never gonna run around and desert you",
        "Never gonna make you cry",
        "Never gonna say goodbye",
        "Never gonna tell a lie and hurt you",
        "Never gonna stop"
    };
    
    int N;
    cin >> N;
    cin.ignore();

    int isTrue = 0;
    for (int i = 0; i < N; i++) {
        string S;
        getline(cin, S);

        for (int i = 0; i < vec.size(); i++) {
            if (S == vec[i]) {
                isTrue++;
                break;
            }
        }
    }

    if (isTrue == N) {
        cout << "No";
    }
    else {
        cout << "Yes";
    }

    return 0;
}