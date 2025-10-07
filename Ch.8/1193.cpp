#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;

    int line = 1;
    int total = 0;

    while (total + line < X) {
        total += line;
        line++;
    }

    int idx = X - total;

    int numerator, denominator;

    if (line % 2 == 0) {
        numerator = idx;
        denominator = line - idx + 1;
    }
    else {
        numerator = line - idx + 1;
        denominator = idx;
    }

    cout << numerator << "/" << denominator;
    return 0;
}
