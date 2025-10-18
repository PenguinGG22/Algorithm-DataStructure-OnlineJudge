#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char C;
    cin >> C;
    if (C == 'M') cout << "MatKor";
    if (C == 'W') cout << "WiCys";
    if (C == 'C') cout << "CyKor";
    if (C == 'A') cout << "AlKor";
    if (C == '$') cout << "$clear";

    return 0;
}