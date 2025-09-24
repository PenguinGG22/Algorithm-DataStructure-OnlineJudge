#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    int max_num = max(N, M);
    int min_num = min(N, M);

    int GCD = 0;
    while (true) {
        if (max_num % min_num == 0) {
            GCD = min_num;
            break;
        }
        int tmp = max_num % min_num;
        max_num = min_num;
        min_num = tmp;
    }
    
    int LCM = N * M / GCD;
    cout << GCD << '\n' << LCM;

    return 0;
}