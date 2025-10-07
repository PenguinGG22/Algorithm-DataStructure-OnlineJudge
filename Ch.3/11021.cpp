#include <iostream>
using namespace std;

int main() {
    int input;
    cin >> input;
    
    int* arr = new int[input];
    for (int i = 0; i < input; i++) {
        int A = 0, B = 0;
        cin >> A >> B;
        arr[i] = A + B;
    }
    for (int i = 0; i < input; i++) {
        cout << "Case #" << i+1 << ": " << arr[i] << endl;
    }
    delete[] arr;
}