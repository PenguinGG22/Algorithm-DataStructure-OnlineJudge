#include <bits/stdc++.h>
using namespace std;

int D[11];
int T, N;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> T;

    D[1] = 1;
    D[2] = 2;
    D[3] = 4;

    for (int i = 3; i < 10; ++i) {
        D[i + 1] = D[i] + D[i - 1] + D[i - 2];
    }

    while (T--) {
        cin >> N;
        cout << D[N] << '\n';
    }

    return 0;
}

/*

1. 테이블 정의
D[i] = i를 1, 2, 3의 합으로 나타내는 방법의 수

2. 점화식 찾기
D[1] = 1 = 1개
D[2] = 1 + 1, 2 = 2개
D[3] = 1 + 1 + 1, 1 + 2, 2 + 1, 3 = 4개
D[4] = 1 + 1 + 1 + 1, 1 + 1 + 2, 1 + 2 + 1, 2 + 1 + 1, 2 + 2, 1 + 3, 3 + 1 = 7개
...

D[k+1] = D[k-2] + D[k-1] + D[k]

3. 초기값 정의
D[1] = 1
D[2] = 2
D[3] = 4

*/