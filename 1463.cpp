#include <bits/stdc++.h>
using namespace std;

int D[1000005];
int N;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N;

    for (int i = 2; i <= N; ++i) {
        D[i] = D[i - 1] + 1;
        if (i % 2 == 0) D[i] = min(D[i], D[i / 2] + 1);
        if (i % 3 == 0) D[i] = min(D[i], D[i / 3] + 1);
    }
    
    cout << D[N];
    return 0;
}

/*

1. 테이블 정의
D[i] = i를 1로 만들기 위해 필요한 연산 사용 횟수의 최솟값

2. 점화식 찾기
min(D[k] = D[k/3] + 1, D[k] = D[k/2] + 1, D[k] = D[k-1] + 1)

3. 초기값 정의
D[1] = 0

*/