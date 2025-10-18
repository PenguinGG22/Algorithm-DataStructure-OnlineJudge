#include <bits/stdc++.h>
using namespace std;

int main() {
    int input;
    cin >> input;
    
    for (int i = 0; i < input; i++) {
        for (int j = 1; j < i + 2; j++) cout << "*";
        cout << '\n';
    }

    return 0;
}