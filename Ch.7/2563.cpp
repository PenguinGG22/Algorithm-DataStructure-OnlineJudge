#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N = 100, M = 100;

    vector<vector<int>> A(N, vector<int>(M));

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            A[i][j] = 0;

    int input;
    cin >> input;
    for (int i = 0; i < input; i++) {
        int x, y;
        cin >> x >> y;
        for (int i = x; i < x + 10; ++i)
            for (int j = y; j < y + 10; ++j)
                A[i][j] = 1;
    }

    int cnt = 0;
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            cnt += A[i][j];

    cout << cnt;
    return 0;
}