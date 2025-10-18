#include <iostream>
using namespace std;

int main() {
    int arr[1000] = { 0 };
    int num = 0;
    while (1) {
        int A = 0, B = 0;
        cin >> A >> B;
        if (A == 0 && B == 0) break;
        arr[num] = A + B;
        num++;
    }
    for (int i = 0; i < num; i++) {
        cout << arr[i] << endl;
    }
}