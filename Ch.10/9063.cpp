#include <iostream>
using namespace std;

int main()
{
    int input;
    cin >> input;

    int x = 0, y = 0;
    cin >> x >> y;
    
    if (input == 1) {
        cout << 0;
        return 0;
    }

    int max_x = x, max_y = y;
    int min_x = x, min_y = y;

    for (int i = 1; i < input; i++) {
        cin >> x >> y;
        if (max_x < x) max_x = x;
        if (max_y < y) max_y = y;
        if (min_x > x) min_x = x;
        if (min_y > y) min_y = y;
    }
    
    int height = max_y - min_y;
    int width = max_x - min_x;

    cout << height * width;

    return 0;
}