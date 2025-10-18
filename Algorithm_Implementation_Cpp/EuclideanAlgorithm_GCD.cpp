#include <bits/stdc++.h>
using namespace std;

int EuclideanAlgorithm_GCD(int a, int b) {
    int temp;
    while (b > 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num1, num2;
    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;

    int GCD = EuclideanAlgorithm_GCD(num1, num2);
    cout << "The GCD of " << num1 << " and " << num2 << " is " << GCD;

    return 0;
}