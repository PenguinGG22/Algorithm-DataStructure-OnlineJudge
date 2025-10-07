#include <iostream>
#include <string>
using namespace std;

int main() {
    int input = 0;
    int arr[30] = {0,};
    for(int i=0; i<28; i++){
        cin >> input;
        arr[input-1]++;
    }
    for(int i=0; i<30; i++){
        if(arr[i]==0) cout << i+1 << endl;
    }
}