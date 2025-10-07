#include <iostream>
using namespace std;

bool CheckTriangle(int input1, int input2, int input3) {
    return (input1 + input2 > input3) &&
        (input1 + input3 > input2) &&
        (input2 + input3 > input1);
}

void VaildTriangle(int input1, int input2, int input3) {
    if (input1 == input2 && input1 == input3)
        cout << "Equilateral";
    else if (input1 == input2 || input1 == input3 || input2 == input3)
        cout << "Isosceles ";
    else
        cout << "Scalene ";
}

int main(){
    int input1, input2, input3;
    while (true) {

        cin >> input1 >> input2 >> input3;
        if (input1 == 0 && input2 == 0 && input3 == 0) {
            break;
        }

        if (!CheckTriangle(input1, input2, input3))
            cout << "Invalid";
        else VaildTriangle(input1, input2, input3);

        cout << endl;
    }

    return 0;
}