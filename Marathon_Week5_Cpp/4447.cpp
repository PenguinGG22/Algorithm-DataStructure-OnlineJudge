#include <iostream>
#include <string>
using namespace std;

int main() {

    int N;
    cin >> N;
    cin.ignore();

    while(N--) {
        string s;
        getline(cin, s);

        int g = 0, b = 0;
        for(char c : s) {
            if(c == 'g' || c == 'G') g++;
            if(c == 'b' || c == 'B') b++;
        }

        cout << s << " is ";
        if(g > b)
            cout << "GOOD\n";
        else if(g < b)
            cout << "A BADDY\n";
        else
            cout << "NEUTRAL\n";
    }

    return 0;
}