#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N = 9, M = 9;

    vector<vector<int>> A(N, vector<int>(M));
    vector<vector<int>> B(N, vector<int>(M));

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            cin >> A[i][j];

    int max = A[0][0];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (max < A[i][j])
                max = A[i][j];
        }
    }

    int max_x = 0, max_y = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (max == A[i][j]) {
                max_x = i;
                max_y = j;
            }
        }
    }

    cout << max << endl;
    cout << max_x + 1 << ' ' << max_y + 1;

    return 0;
}
