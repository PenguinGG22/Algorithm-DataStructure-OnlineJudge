#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    int arr[26];

    for(int i=0; i<26; i++){
        arr[i] = -1;
    }

    cin >> input;
    for(int i=0; i<26; i++){
        int cnt = 0;
        for(int j=0; j<input.length(); j++){
            if(i+97 == int(input[j]) && cnt == 0){
                arr[i] = j;
                cnt++;
            }
        }
        cout << arr[i] << " ";
    }
    
    return 0;
}