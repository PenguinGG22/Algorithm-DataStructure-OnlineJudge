#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int count = 0;
    int num = 665;

    while (true) {
        num++;
        string s = to_string(num);
        if (s.find("666") != string::npos) {
            count++;
        }
        if (count == N) {
            cout << num << endl;
            break;
        }
    }

    return 0;
}