#include <iostream>
using namespace std;

int main() {
    int input;
    cin >> input;
    
    int(* arr)[2] = new int[input][2];
    for (int i = 0; i < input; i++) {
        int A = 0, B = 0;
        cin >> A >> B;
        arr[i][0] = A;
        arr[i][1] = B;
    }
    for (int i = 0; i < input; i++) {
        cout << "Case #" << i+1 << ": " << arr[i][0] << " + "<< arr[i][1]
            <<" = " <<arr[i][0]+arr[i][1] << endl;
    }
    delete[] arr;
}