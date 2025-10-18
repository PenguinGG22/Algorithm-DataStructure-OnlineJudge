#include <iostream>
using namespace std;

int main() {
    int X, N, a, b;
    int hap = 0;
    cin >> X >> N;
    for (int i = 0; i < N; i++) {
        cin >> a >> b;
        hap += a * b;
    }
    if (hap == X) cout << "Yes";
    else cout << "No";
}