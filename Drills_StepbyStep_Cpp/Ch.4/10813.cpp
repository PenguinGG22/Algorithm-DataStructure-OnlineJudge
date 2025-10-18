#include <iostream>
#include <string>
using namespace std;

int main() {
    int input1, input2;
    cin >> input1 >> input2;
    int* arr = new int[input1+1];
    for(int i=1; i<=input1; i++) arr[i] = i;
    for(int i=0; i<input2; i++){
        int n=0, m=0, tmp=0;
        cin >> n >> m;
        tmp = arr[n];
        arr[n] = arr[m];
        arr[m] = tmp;
    }
    for(int i=1; i<=input1; i++){
        cout << arr[i] << ' ';
    }
    delete[] arr;
}