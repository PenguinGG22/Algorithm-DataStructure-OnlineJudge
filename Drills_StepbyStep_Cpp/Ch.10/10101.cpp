#include <iostream>
using namespace std;

int main()
{
    int input1, input2, input3;
    cin >> input1 >> input2 >> input3;

    int hap = input1 + input2 + input3;
    if (hap != 180) {
        cout << "Error";
        return 0;
    }

    if (input1 == input2 && input1 == input3) cout << "Equilateral";
    else if (input1 == input2 && input1 != input3) cout << "Isosceles";
    else if (input1 == input3 && input1 != input2) cout << "Isosceles";
    else if (input2 == input3 && input3 != input1) cout << "Isosceles";
    else cout << "Scalene";
    
    return 0;
}