#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int lamda;
    cin >> lamda;
    if (lamda >= 620 && lamda <= 780) {
        cout << "Red";
    }
    else if (lamda >= 590 && lamda < 620) {
        cout << "Orange";
    }
    else if (lamda >= 570 && lamda < 590) {
        cout << "Yellow";
    }
    else if (lamda >= 495 && lamda < 570) {
        cout << "Green";
    }
    else if (lamda >= 450 && lamda < 495) {
        cout << "Blue";
    }
    else if (lamda >= 425 && lamda < 450) {
        cout << "Indigo";
    }
    else if (lamda >= 380 && lamda < 425) {
        cout << "Violet";
    }

    return 0;
}