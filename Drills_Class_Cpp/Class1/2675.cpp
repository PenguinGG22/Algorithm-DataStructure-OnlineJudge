#include <bits/stdc++.h>
using namespace std;

int main() {
    int count;
    cin >> count;

    for(int i=0; i<count; i++){
        int cnt = 0;
        string input;
        cin >> cnt >> input;

        for(int j=0; j<input.length(); j++){
            for(int k=0; k<cnt; k++) cout << input[j];
        }
        
        cout << '\n';
    }

    return 0;
}