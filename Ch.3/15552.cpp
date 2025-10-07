#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int input;
    cin >> input;
    
    int* arr = new int[input];
    for (int i = 0; i < input; i++) {
        int A = 0, B = 0;
        cin >> A >> B;
        arr[i] = A + B;
    }
    for (int i = 0; i < input; i++) {
        cout << arr[i] << '\n';
    }
    delete[] arr;
}