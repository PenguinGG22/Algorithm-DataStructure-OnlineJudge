#include <bits/stdc++.h>
using namespace std;

int main() {
    int input;
    cin >> input;
    int* arr = new int[input];

    for (int i = 0; i < input; i++) {
        int A, B;
        cin >> A >> B;
        arr[i] = A + B;
    }

    for (int i = 0; i < input; i++) {
        cout << arr[i] << endl;
    }

    delete[] arr;

    return 0;
}