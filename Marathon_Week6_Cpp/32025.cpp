#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int H, W; 
    cin >> H;
    cin >> W;

    int min_len = min(H, W);

    cout << min_len * 50;

    return 0;
}