#include <iostream>
using namespace std;

int main(){
    int arr[6] = {1, 1, 2, 2, 2, 8};
    int input[6] = {0, 0, 0, 0, 0, 0};
    for(int i=0; i<6; i++){
        cin >> input[i];
    }
    for(int i=0; i<6; i++){
        cout << arr[i]-input[i];
        cout << " ";
    }
}