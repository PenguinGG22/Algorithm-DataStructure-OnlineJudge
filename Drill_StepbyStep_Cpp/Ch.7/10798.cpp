#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N = 5, M = 15;

    vector<vector<char>> A(N, vector<char>(M));

    string gets;
    for (int i = 0; i < N; ++i){
        cin >> gets;
        for (int j = 0; j < gets.length(); ++j) {
            A[i][j] = gets[j];
        }
    }

    for (int j = 0; j < M; ++j) {
        for (int i = 0; i < N; ++i) {
            if (A[i][j] != '\0') {
                cout << A[i][j];
            }
        }
    }

    return 0;
}