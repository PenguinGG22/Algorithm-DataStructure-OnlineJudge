#include <iostream>
using namespace std;

int main() {
    int input;
    cin >> input;
    int hap = 0;
    for (int i = 1; i < input+1; i++) {
        hap += i;
    }
    cout << hap;
}