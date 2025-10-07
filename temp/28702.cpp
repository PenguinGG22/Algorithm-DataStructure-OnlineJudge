#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string arr[3];
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 3; i++) {
        char c = arr[i][0];
        if (isdigit(c)) {
            int num = stoi(arr[i]) + 3 - i;
            if (num % 3 == 0 && num % 5 == 0) {
                cout << "FizzBuzz";
                return 0;
            }
            else if (num % 3 == 0) {
                cout << "Fizz";
                return 0;
            }
            else if (num % 5 == 0) {
                cout << "Buzz";
                return 0;
            }
            else {
                cout << num;
                return 0;
            }
        }
    }

    return 0;
}