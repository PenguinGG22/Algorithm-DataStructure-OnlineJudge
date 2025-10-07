#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

    vector<string> alp = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };

    string input;
    cin >> input;

    for (int i = 0; i < alp.size(); ++i) {
        int idx = 0;
        while (true) {
            idx = input.find(alp[i]);
            if (idx == string::npos)
                break;
            input.replace(idx, alp[i].length(), "*");
        }
    }
    cout << input.length();

    return 0;
}