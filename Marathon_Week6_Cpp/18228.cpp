#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    int input;
    long long minLeft = 2000000000;
    long long minRight = 2000000000;
    bool isRightSide = false;

    for (int i = 0; i < N; i++) {
        cin >> input;
        if (input == -1) {
            isRightSide = true;
            continue;
        }
        
        if (!isRightSide) {
            if (input < minLeft) minLeft = input;
        }
        else {
            if (input < minRight) minRight = input;
        }
    }

    cout << minLeft + minRight;

    return 0;
}